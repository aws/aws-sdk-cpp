/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/crt/Optional.h>
#include <aws/crt/Types.h>
#include <fuzztest/fuzztest.h>
#include <gtest/gtest.h>
#include <harness/CodecFuzzTargets.h>
#include <harness/DynamicStruct.h>
#include <harness/FuzzDomains.h>
#include <harness/FuzzSchemas.h>
#include <harness/ReferenceParity.h>
#include <harness/ScalarText.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/Codec.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/XmlTraits.h>

#include <cctype>
#include <clocale>
#include <cmath>
#include <cstdint>
#include <functional>
#include <string>
#include <tuple>
#include <vector>

using namespace smithy::schema;

namespace {

const OperationRequestContext& FuzzContext() {
  static const OperationRequestContext ctx{"FuzzOperation", "2026-10-06"};
  return ctx;
}

std::string WrapResult(const std::string& inner) {
  return "<FuzzOperationResponse><FuzzOperationResult>" + inner + "</FuzzOperationResult></FuzzOperationResponse>";
}

std::vector<std::tuple<std::string>> ResponseSeeds(const char* suiteTest) {
  auto seeds = fuzz::ByteSeeds(XmlCodec(), suiteTest);
  if (!fuzz::ReproFileSet()) {
    const size_t bare = seeds.size();
    for (size_t i = 0; i < bare; ++i) {
      std::string wrapped = WrapResult(std::get<0>(seeds[i]));
      if (wrapped.size() <= fuzz::MAX_PAYLOAD_BYTES) {
        seeds.emplace_back(std::move(wrapped));
      }
    }
  }
  return seeds;
}

std::vector<std::string> ResponseDictionary() {
  auto entries = fuzz::LoadDictionary("xml.dict");
  for (const char* token : {"<FuzzOperationResponse>", "</FuzzOperationResponse>", "<FuzzOperationResult>", "</FuzzOperationResult>",
                            "<ResponseMetadata>", "<RequestId>"}) {
    entries.emplace_back(token);
  }
  return entries;
}

Aws::Crt::ByteCursor ResponseCursor(const std::string& bytes) {
  return Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(bytes.data()), bytes.size());
}

// The serializer encodes '=' inside values, so a field has exactly one separator.
Aws::String ExpectWellFormedField(const Aws::String& field, const Aws::String& body) {
  const size_t eq = field.find('=');
  EXPECT_NE(eq, Aws::String::npos) << "field without '=': " << field << " body=" << body;
  if (eq == Aws::String::npos) {
    return {};
  }
  EXPECT_NE(eq, 0u) << "empty key: " << body;
  EXPECT_EQ(field.find('=', eq + 1), Aws::String::npos) << "more than one '=' in field: " << field << " body=" << body;
  const Aws::String hex("0123456789ABCDEFabcdef");
  size_t i = 0;
  while (i < field.size()) {
    const char c = field[i];
    if (c == '%') {
      EXPECT_LT(i + 2, field.size()) << "truncated escape: " << body;
      if (i + 2 >= field.size()) {
        break;
      }
      EXPECT_NE(hex.find(field[i + 1]), Aws::String::npos) << "bad escape: " << body;
      EXPECT_NE(hex.find(field[i + 2]), Aws::String::npos) << "bad escape: " << body;
      i += 3;
    } else {
      const bool allowed =
          (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || Aws::String("-_.~=").find(c) != Aws::String::npos;
      EXPECT_TRUE(allowed) << "unencoded byte '" << c << "' in " << body;
      ++i;
    }
  }
  return field.substr(0, eq);
}

// Empty when a field's decoded text is right; otherwise what is wrong with it.
using TextCheck = std::function<Aws::String(const Aws::String&)>;

TextCheck ExactText(const Aws::String& expected) {
  return [expected](const Aws::String& text) { return text == expected ? Aws::String() : "expected \"" + expected + "\""; };
}

TextCheck PresentOnly() {
  return [](const Aws::String&) { return Aws::String(); };
}

bool SameNumber(double expected, double actual) { return expected == actual && std::signbit(expected) == std::signbit(actual); }

TextCheck FloatingPointText(double expected, bool singlePrecision) {
  return [expected, singlePrecision](const Aws::String& text) {
    if (!std::isfinite(expected)) {
      const char* name = std::isnan(expected) ? "NaN" : (expected > 0 ? "Infinity" : "-Infinity");
      return text == name ? Aws::String() : Aws::String("expected ") + name;
    }
    const auto parsed = fuzz::ParseDoubleText(text);
    const bool same =
        parsed.has_value() && std::isfinite(*parsed) &&
        (singlePrecision ? SameNumber(static_cast<float>(expected), static_cast<float>(*parsed)) : SameNumber(expected, *parsed));
    return same ? Aws::String() : "expected the number " + Aws::Utils::StringUtils::to_string(expected);
  };
}

// Date-time and http-date text carries whole seconds, truncated toward zero.
TextCheck TimestampText(int64_t expectedMillis, TimestampFormatTrait::Format format) {
  return [expectedMillis, format](const Aws::String& text) {
    Aws::Crt::Optional<int64_t> millis;
    int64_t expected = expectedMillis;
    if (format == TimestampFormatTrait::Format::EPOCH_SECONDS) {
      const auto seconds = fuzz::ParseDoubleText(text);
      millis = seconds.has_value() && std::isfinite(*seconds) ? Aws::Crt::Optional<int64_t>(std::llround(*seconds * 1000.0))
                                                              : Aws::Crt::Optional<int64_t>();
    } else {
      const Aws::Utils::DateTime parsed(
          text, format == TimestampFormatTrait::Format::HTTP_DATE ? Aws::Utils::DateFormat::RFC822 : Aws::Utils::DateFormat::ISO_8601);
      millis = parsed.WasParseSuccessful() ? Aws::Crt::Optional<int64_t>(parsed.Millis()) : Aws::Crt::Optional<int64_t>();
      expected -= expectedMillis % 1000;
    }
    return millis.has_value() && *millis == expected ? Aws::String() : "expected " + Aws::Utils::StringUtils::to_string(expected) + " ms";
  };
}

// Names follow the awsQuery and ec2Query rules, not the serializer.
class ExpectedFields final {
 public:
  using Fields = Aws::Map<Aws::String, TextCheck>;

  explicit ExpectedFields(bool ec2) : m_ec2(ec2) {}

  void AddStruct(const Aws::String& prefix, const Schema& structSchema, const fuzz::FuzzValue& value) {
    for (const auto& entry : value.GetMembers()) {
      const Schema& member = *structSchema.GetMember(entry.first).value();
      AddValue(prefix.empty() ? MemberName(member) : prefix + "." + MemberName(member), member, entry.second);
    }
  }

  const Fields& Get() const { return m_fields; }

 private:
  template <typename T>
  static Aws::String TraitValue(const Schema& member, const TraitKey<T>& key, const Aws::String& fallback) {
    const auto trait = member.GetTrait(key);
    return trait ? trait->GetValue() : fallback;
  }

  Aws::String MemberName(const Schema& member) const {
    const auto ec2Name = member.GetTrait(Ec2QueryNameTrait::KEY());
    if (m_ec2 && ec2Name) {
      return ec2Name->GetValue();
    }
    Aws::String name = TraitValue(member, XmlNameTrait::KEY(), member.GetMemberName());
    if (m_ec2 && !name.empty()) {
      name[0] = static_cast<char>(std::toupper(static_cast<unsigned char>(name[0])));
    }
    return name;
  }

  void AddValue(const Aws::String& key, const Schema& member, const fuzz::FuzzValue& value) {
    switch (member.GetType()) {
      case ShapeType::List:
        AddList(key, member, value);
        return;
      case ShapeType::Map:
        AddMap(key, member, value);
        return;
      case ShapeType::Structure:
      case ShapeType::Union:
        AddStruct(key, **member.GetMemberTarget(), value);
        return;
      default:
        AddScalar(key, member, value);
        return;
    }
  }

  // awsQuery sends an empty list as a bare key; ec2Query omits it.
  void AddList(const Aws::String& key, const Schema& member, const fuzz::FuzzValue& value) {
    if (value.GetList().empty() && !m_ec2) {
      Add(key, Aws::String());
    }
    const bool flattened = m_ec2 || member.HasTrait(XmlFlattenedTrait::KEY());
    const Aws::String itemBase = flattened ? key : key + "." + TraitValue(member, XmlListItemNameTrait::KEY(), "member");
    const auto element = (*member.GetMemberTarget())->GetMember("member").value();
    for (size_t i = 0; i < value.GetList().size(); ++i) {
      AddValue(itemBase + "." + Aws::Utils::StringUtils::to_string(i + 1), *element, value.GetList()[i]);
    }
  }

  // Both protocols omit an empty map.
  void AddMap(const Aws::String& key, const Schema& member, const fuzz::FuzzValue& value) {
    const bool flattened = member.HasTrait(XmlFlattenedTrait::KEY());
    const Aws::String entryBase = flattened ? key : key + "." + TraitValue(member, XmlMapEntryNameTrait::KEY(), "entry");
    const Aws::String keyName = TraitValue(member, XmlMapKeyNameTrait::KEY(), "key");
    const Aws::String valueName = TraitValue(member, XmlMapValueNameTrait::KEY(), "value");
    const auto valueMember = (*member.GetMemberTarget())->GetMember("value").value();
    size_t index = 0;
    for (const auto& entry : value.GetMap()) {
      const Aws::String entryKey = entryBase + "." + Aws::Utils::StringUtils::to_string(++index);
      Add(entryKey + "." + keyName, entry.first);
      AddValue(entryKey + "." + valueName, *valueMember, entry.second);
    }
  }

  void AddScalar(const Aws::String& key, const Schema& member, const fuzz::FuzzValue& value) {
    switch (member.GetType()) {
      case ShapeType::Boolean:
        Add(key, value.GetBoolean() ? "true" : "false");
        return;
      case ShapeType::Byte:
      case ShapeType::Short:
      case ShapeType::Integer:
      case ShapeType::IntEnum:
      case ShapeType::Long:
        Add(key, Aws::Utils::StringUtils::to_string(value.GetInteger()));
        return;
      case ShapeType::String:
      case ShapeType::Enum:
        Add(key, value.GetString());
        return;
      case ShapeType::Blob:
        Add(key, Aws::Utils::HashingUtils::Base64Encode(value.GetBlob()));
        return;
      case ShapeType::Float:
      case ShapeType::Double:
        Insert(key, FloatingPointText(value.GetDouble(), member.GetType() == ShapeType::Float));
        return;
      default:
        Insert(key, TimestampText(value.GetTimestamp().Millis(), ResolveTimestampFormat(member, TimestampFormatTrait::Format::DATE_TIME)));
        return;
    }
  }

  // URLEncode stops at a NUL, so text holding one must be present but is not compared.
  void Add(const Aws::String& key, const Aws::String& text) {
    Insert(key, text.find('\0') != Aws::String::npos ? PresentOnly() : ExactText(text));
  }

  void Insert(const Aws::String& key, TextCheck check) {
    if (!m_fields.emplace(key, std::move(check)).second) {
      ADD_FAILURE() << "the value implies field '" << key << "' twice";
    }
  }

  bool m_ec2;
  Fields m_fields;
};

Aws::String FieldMismatch(const ExpectedFields::Fields& expected, const Aws::Map<Aws::String, Aws::String>& actual) {
  for (const auto& field : expected) {
    const auto found = actual.find(field.first);
    if (found == actual.end()) {
      return "missing field '" + field.first + "'";
    }
    const Aws::String wrong = field.second(found->second);
    if (!wrong.empty()) {
      return "field '" + field.first + "' is \"" + found->second + "\", " + wrong;
    }
  }
  for (const auto& field : actual) {
    if (expected.find(field.first) == expected.end()) {
      return "unexpected field '" + field.first + "'";
    }
  }
  return {};
}

void ExpectWellFormedBody(const ClientProtocol& protocol, bool ec2, const std::shared_ptr<const Schema>& schema,
                          const fuzz::FuzzValue& value) {
  fuzz::DynamicStruct input(schema, value);
  const auto payload = protocol.SerializeRequest(FuzzContext(), *schema, input);
  ASSERT_TRUE(payload.IsSuccess()) << schema->GetId() << ": " << payload.GetError().GetMessage();
  const Aws::String body = payload.GetResult();
  int actions = 0;
  int versions = 0;
  Aws::Map<Aws::String, Aws::String> fields;
  for (const auto& field : Aws::Utils::StringUtils::Split(body, '&', Aws::Utils::StringUtils::SplitOptions::INCLUDE_EMPTY_ENTRIES)) {
    const Aws::String key = ExpectWellFormedField(field, body);
    if (key == "Action") {
      ++actions;
      EXPECT_EQ(field, "Action=FuzzOperation") << body;
    } else if (key == "Version") {
      ++versions;
      EXPECT_EQ(field, "Version=2026-10-06") << body;
    } else if (!key.empty()) {
      const bool unique = fields.emplace(key, Aws::Utils::StringUtils::URLDecode(field.substr(key.size() + 1).c_str())).second;
      EXPECT_TRUE(unique) << "duplicate key '" << key << "' in " << body;
    }
  }
  EXPECT_EQ(actions, 1) << body;
  EXPECT_EQ(versions, 1) << body;
  ExpectedFields expected(ec2);
  expected.AddStruct("", *schema, value);
  EXPECT_EQ(FieldMismatch(expected.Get(), fields), "") << schema->GetId() << " body=" << body;
}

void ExpectWellFormedRequest(const ClientProtocol& protocol, bool ec2, const std::vector<uint64_t>& choices,
                             const std::vector<std::string>& strings) {
  for (const auto& schema : fuzz::FuzzSchemas()) {
    fuzz::ChoiceTape tape(choices, strings);
    const fuzz::FuzzValue value = fuzz::BuildStruct(*schema, tape);
    // Query cannot serialize documents; WriteDocument fails by design.
    if (!fuzz::ContainsDocument(value)) {
      ExpectWellFormedBody(protocol, ec2, schema, value);
    }
  }
}

void SerializeRequestIsWellFormedForm(const std::vector<uint64_t>& choices, const std::vector<std::string>& strings) {
  ExpectWellFormedRequest(AwsQueryProtocol(), false, choices, strings);
  ExpectWellFormedRequest(Ec2QueryProtocol(), true, choices, strings);
}

void DeserializeResponseNeverCrashes(const std::string& bytes) {
  for (const auto& schema : fuzz::FuzzSchemas()) {
    fuzz::DynamicStruct awsQuery(schema, fuzz::FuzzValue::Struct());
    AwsQueryProtocol().DeserializeResponse(FuzzContext(), ResponseCursor(bytes), awsQuery);
    fuzz::DynamicStruct ec2(schema, fuzz::FuzzValue::Struct());
    Ec2QueryProtocol().DeserializeResponse(FuzzContext(), ResponseCursor(bytes), ec2);
  }
}

void ExpectStableReads(const ClientProtocol& protocol, const std::string& body) {
  for (const auto& schema : fuzz::FuzzSchemas()) {
    fuzz::DynamicStruct first(schema, fuzz::FuzzValue::Struct());
    if (!protocol.DeserializeResponse(FuzzContext(), ResponseCursor(body), first).has_value()) {
      fuzz::DynamicStruct second(schema, fuzz::FuzzValue::Struct());
      EXPECT_FALSE(protocol.DeserializeResponse(FuzzContext(), ResponseCursor(body), second).has_value()) << body;
      EXPECT_EQ(fuzz::FindMismatch(first.GetValue(), second.GetValue(), *schema, fuzz::CodecTolerance::Xml()), "") << body;
    }
  }
}

// The wrapper is peeled on read but not written back, so compare two reads of the same body.
void DeserializeResponseIsStable(const std::string& inner) {
  ExpectStableReads(AwsQueryProtocol(), WrapResult(inner));
  ExpectStableReads(Ec2QueryProtocol(), inner);
}

// ec2Query responses are bare XML, which XmlReferenceFuzz already judges.
void DeserializeResponseMatchesReference(const std::string& bytes) {
  EXPECT_EQ(fuzz::AwsQueryResponseReferenceMismatch(bytes), "") << bytes;
}

}  // namespace

namespace {

int MemberIndex(const Schema& schema, const char* name) { return schema.GetMember(name).value()->GetMemberIndex(); }

fuzz::FuzzValue XmlTraitsValue(const Schema& schema) {
  fuzz::FuzzValue nested = fuzz::FuzzValue::Struct();
  nested.SetMember(MemberIndex(**schema.GetMember("nested").value()->GetMemberTarget(), "str"), fuzz::FuzzValue::String("x"));
  fuzz::FuzzValue value = fuzz::FuzzValue::Struct();
  value.SetMember(MemberIndex(schema, "intAttr"), fuzz::FuzzValue::Integer(3));
  value.SetMember(MemberIndex(schema, "flatList"), fuzz::FuzzValue::List({fuzz::FuzzValue::String("s")}));
  value.SetMember(MemberIndex(schema, "namedList"), fuzz::FuzzValue::List({fuzz::FuzzValue::Integer(7)}));
  value.SetMember(MemberIndex(schema, "flatMap"), fuzz::FuzzValue::Map({{"fk", fuzz::FuzzValue::String("fv")}}));
  value.SetMember(MemberIndex(schema, "namedMap"), fuzz::FuzzValue::Map({{"a", fuzz::FuzzValue::Integer(2)}}));
  value.SetMember(MemberIndex(schema, "nested"), std::move(nested));
  return value;
}

Aws::Map<Aws::String, Aws::String> Texts(std::initializer_list<std::pair<const char*, const char*>> fields) {
  Aws::Map<Aws::String, Aws::String> result;
  for (const auto& field : fields) {
    result.emplace(field.first, field.second);
  }
  return result;
}

ExpectedFields::Fields Expect(std::initializer_list<std::pair<const char*, const char*>> fields) {
  ExpectedFields::Fields result;
  for (const auto& field : fields) {
    result.emplace(field.first, ExactText(field.second));
  }
  return result;
}

}  // namespace

// The expected names are written out from the protocol rules, so the model is checked independently of the serializer.
TEST(QueryProtocolOracle, AwsQueryNamesFollowXmlTraits) {
  const auto schema = fuzz::FindFuzzSchema("XmlTraits");
  ExpectedFields expected(false);
  expected.AddStruct("", *schema, XmlTraitsValue(*schema));
  EXPECT_EQ(FieldMismatch(expected.Get(), Texts({{"int-attr", "3"},
                                                 {"flatList.1", "s"},
                                                 {"namedList.item.1", "7"},
                                                 {"flatMap.1.key", "fk"},
                                                 {"flatMap.1.value", "fv"},
                                                 {"namedMap.pair.1.k", "a"},
                                                 {"namedMap.pair.1.v", "2"},
                                                 {"Inner.str", "x"}})),
            "");
  ExpectWellFormedBody(AwsQueryProtocol(), false, schema, XmlTraitsValue(*schema));
}

TEST(QueryProtocolOracle, Ec2QueryFlattensListsAndCapitalizesNames) {
  const auto schema = fuzz::FindFuzzSchema("XmlTraits");
  ExpectedFields expected(true);
  expected.AddStruct("", *schema, XmlTraitsValue(*schema));
  EXPECT_EQ(FieldMismatch(expected.Get(), Texts({{"Int-attr", "3"},
                                                 {"FlatList.1", "s"},
                                                 {"NamedList.1", "7"},
                                                 {"FlatMap.1.key", "fk"},
                                                 {"FlatMap.1.value", "fv"},
                                                 {"NamedMap.pair.1.k", "a"},
                                                 {"NamedMap.pair.1.v", "2"},
                                                 {"Inner.Str", "x"}})),
            "");
  ExpectWellFormedBody(Ec2QueryProtocol(), true, schema, XmlTraitsValue(*schema));
}

TEST(QueryProtocolOracle, Ec2QueryNamePrecedesXmlName) {
  const auto schema = fuzz::FindFuzzSchema("Ec2Named");
  fuzz::FuzzValue value = fuzz::FuzzValue::Struct();
  value.SetMember(MemberIndex(*schema, "renamed"), fuzz::FuzzValue::String("r"));
  value.SetMember(MemberIndex(*schema, "both"), fuzz::FuzzValue::Integer(1));
  value.SetMember(MemberIndex(*schema, "plain"), fuzz::FuzzValue::String("p"));
  ExpectedFields awsQuery(false);
  awsQuery.AddStruct("", *schema, value);
  EXPECT_EQ(FieldMismatch(awsQuery.Get(), Texts({{"renamed", "r"}, {"xmlBoth", "1"}, {"plain", "p"}})), "");
  ExpectedFields ec2(true);
  ec2.AddStruct("", *schema, value);
  EXPECT_EQ(FieldMismatch(ec2.Get(), Texts({{"CustomName", "r"}, {"Ec2Both", "1"}, {"Plain", "p"}})), "");
}

TEST(QueryProtocolOracle, EmptyListIsABareKeyOnlyInAwsQuery) {
  const auto schema = fuzz::FindFuzzSchema("StringListValue");
  const fuzz::FuzzValue value = [&] {
    fuzz::FuzzValue v = fuzz::FuzzValue::Struct();
    v.SetMember(MemberIndex(*schema, "values"), fuzz::FuzzValue::List({}));
    return v;
  }();
  ExpectedFields awsQuery(false);
  awsQuery.AddStruct("", *schema, value);
  EXPECT_EQ(FieldMismatch(awsQuery.Get(), Texts({{"values", ""}})), "");
  ExpectedFields ec2(true);
  ec2.AddStruct("", *schema, value);
  EXPECT_TRUE(ec2.Get().empty());
}

TEST(QueryProtocolOracle, SwappedKeyAndValueOrWrongIndexIsReported) {
  const auto expected = Expect({{"m.entry.1.key", "k"}, {"m.entry.1.value", "v"}});
  EXPECT_EQ(FieldMismatch(expected, Texts({{"m.entry.1.key", "k"}, {"m.entry.1.value", "v"}})), "");
  EXPECT_NE(FieldMismatch(expected, Texts({{"m.entry.1.key", "v"}, {"m.entry.1.value", "k"}})), "");
  EXPECT_NE(FieldMismatch(expected, Texts({{"m.entry.0.key", "k"}, {"m.entry.0.value", "v"}})), "");
  EXPECT_NE(FieldMismatch(expected, Texts({{"m.entry.1.key", "k"}})), "");
}

TEST(QueryProtocolOracle, FloatingPointAndTimestampTextIsChecked) {
  EXPECT_EQ(FloatingPointText(1.5, false)("1.5"), "");
  EXPECT_NE(FloatingPointText(1.5, false)("1,5"), "");
  EXPECT_NE(FloatingPointText(1.5, false)("1.25"), "");
  EXPECT_NE(FloatingPointText(-0.0, false)("0"), "");
  EXPECT_EQ(FloatingPointText(static_cast<double>(3.14f), true)("3.14"), "");
  EXPECT_EQ(FloatingPointText(INFINITY, false)("Infinity"), "");
  EXPECT_NE(FloatingPointText(INFINITY, false)("inf"), "");
  EXPECT_EQ(FloatingPointText(std::nan(""), true)("NaN"), "");
  EXPECT_EQ(TimestampText(1001, TimestampFormatTrait::Format::EPOCH_SECONDS)("1.001"), "");
  EXPECT_NE(TimestampText(1001, TimestampFormatTrait::Format::EPOCH_SECONDS)("1"), "");
  EXPECT_EQ(TimestampText(1577934245678, TimestampFormatTrait::Format::DATE_TIME)("2020-01-02T03:04:05Z"), "");
  EXPECT_NE(TimestampText(1577934245678, TimestampFormatTrait::Format::DATE_TIME)("2020-01-02T03:04:06Z"), "");
  EXPECT_EQ(TimestampText(-1500, TimestampFormatTrait::Format::HTTP_DATE)("Wed, 31 Dec 1969 23:59:59 GMT"), "");
}

TEST(QueryProtocolOracle, RequestsAreWellFormedUnderCommaDecimalLocale) {
  const std::string previous = std::setlocale(LC_NUMERIC, nullptr);
  if (std::setlocale(LC_NUMERIC, "de_DE.UTF-8") == nullptr) {
    GTEST_SKIP() << "de_DE.UTF-8 is not installed";
  }
  for (const auto& tape : fuzz::TapeSeeds("QueryProtocolFuzz.SerializeRequestIsWellFormedForm")) {
    SerializeRequestIsWellFormedForm(std::get<0>(tape), std::get<1>(tape));
  }
  std::setlocale(LC_NUMERIC, previous.c_str());
}

FUZZ_TEST(QueryProtocolFuzz, SerializeRequestIsWellFormedForm)
    .WithDomains(fuzz::ChoicesDomain(), fuzz::StringPoolDomain("xml.dict"))
    .WithSeeds([] { return fuzz::TapeSeeds("QueryProtocolFuzz.SerializeRequestIsWellFormedForm"); });

FUZZ_TEST(QueryProtocolFuzz, DeserializeResponseNeverCrashes).WithDomains(fuzz::PayloadDomain(ResponseDictionary())).WithSeeds([] {
  return ResponseSeeds("QueryProtocolFuzz.DeserializeResponseNeverCrashes");
});

FUZZ_TEST(QueryProtocolFuzz, DeserializeResponseMatchesReference).WithDomains(fuzz::PayloadDomain(ResponseDictionary())).WithSeeds([] {
  return ResponseSeeds("QueryProtocolFuzz.DeserializeResponseMatchesReference");
});

FUZZ_TEST(QueryProtocolFuzz, DeserializeResponseIsStable).WithDomains(fuzz::PayloadDomain("xml.dict")).WithSeeds([] {
  return fuzz::ByteSeeds(XmlCodec(), "QueryProtocolFuzz.DeserializeResponseIsStable");
});
