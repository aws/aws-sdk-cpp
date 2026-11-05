/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <harness/DynamicStruct.h>
#include <harness/FuzzDomains.h>
#include <harness/FuzzSchemas.h>

#include <algorithm>
#include <cerrno>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <limits>
#include <string>
#include <utility>

namespace smithy {
namespace schema {
namespace fuzz {

namespace {

const Aws::Vector<Aws::String>& EdgeStrings() {
  static const Aws::Vector<Aws::String> strings = {
      "",
      "a",
      "\"",
      "\\",
      "<",
      ">",
      "&",
      "]]>",
      "&amp;",
      "\x01\x1f",
      Aws::String("\0", 1),
      "\xC3\xA9",
      "\xF0\x9F\x98\x80",
      "\xFF\xFE",
      " lead",
      "trail ",
      "line\nbreak",
      "\r\n",
      "\t",
      "member",
      "entry",
      "NaN",
      "-Infinity",
      "1e400",
  };
  return strings;
}

bool IsContainer(ShapeType type) {
  return type == ShapeType::List || type == ShapeType::Map || type == ShapeType::Structure || type == ShapeType::Union;
}

int64_t PickInteger(ChoiceTape& tape, int64_t min, int64_t max) {
  const int64_t edges[] = {0, 1, -1, min, max, min + 1, max - 1};
  if (tape.Below(4) < 3) {
    return edges[tape.Below(sizeof(edges) / sizeof(edges[0]))];
  }
  const uint64_t raw = tape.Next();
  if (min == (std::numeric_limits<int64_t>::min)() && max == (std::numeric_limits<int64_t>::max)()) {
    int64_t value = 0;
    std::memcpy(&value, &raw, sizeof(value));
    return value;
  }
  const uint64_t span = static_cast<uint64_t>(max) - static_cast<uint64_t>(min) + 1;
  return min + static_cast<int64_t>(raw % span);
}

double PickDouble(ChoiceTape& tape) {
  const double edges[] = {0.0,
                          -0.0,
                          1.5,
                          -1.5,
                          0.1,
                          1e-7,
                          1e21,
                          9007199254740993.0,
                          std::numeric_limits<double>::quiet_NaN(),
                          std::numeric_limits<double>::infinity(),
                          -std::numeric_limits<double>::infinity(),
                          (std::numeric_limits<double>::max)(),
                          -(std::numeric_limits<double>::max)(),
                          (std::numeric_limits<double>::min)(),
                          std::numeric_limits<double>::denorm_min(),
                          static_cast<double>((std::numeric_limits<float>::max)())};
  if (tape.Below(4) < 3) {
    return edges[tape.Below(sizeof(edges) / sizeof(edges[0]))];
  }
  const uint64_t raw = tape.Next();
  double value = 0.0;
  std::memcpy(&value, &raw, sizeof(value));
  return value;
}

float PickFloat(ChoiceTape& tape) {
  const float edges[] = {0.0f,
                         -0.0f,
                         1.5f,
                         0.1f,
                         std::numeric_limits<float>::quiet_NaN(),
                         std::numeric_limits<float>::infinity(),
                         -std::numeric_limits<float>::infinity(),
                         (std::numeric_limits<float>::max)(),
                         -(std::numeric_limits<float>::max)(),
                         (std::numeric_limits<float>::min)(),
                         std::numeric_limits<float>::denorm_min()};
  if (tape.Below(4) < 3) {
    return edges[tape.Below(sizeof(edges) / sizeof(edges[0]))];
  }
  const uint32_t raw = static_cast<uint32_t>(tape.Next());
  float value = 0.0f;
  std::memcpy(&value, &raw, sizeof(value));
  return value;
}

// Years 0001-9999, clipped to what system_clock can hold.
int64_t PickEpochMillis(ChoiceTape& tape) {
  const int64_t clockMax = std::chrono::duration_cast<std::chrono::milliseconds>((std::chrono::system_clock::duration::max)()).count() - 1;
  const int64_t lo = (std::max)(static_cast<int64_t>(-62135596800000LL), -clockMax);
  const int64_t hi = (std::min)(static_cast<int64_t>(253402300799999LL), clockMax);
  const int64_t edges[] = {0, 1, -1, 999, -999, 1000, 1700000000123LL, lo, hi};
  if (tape.Below(4) < 3) {
    return edges[tape.Below(sizeof(edges) / sizeof(edges[0]))];
  }
  return lo + static_cast<int64_t>(tape.Next() % static_cast<uint64_t>(hi - lo + 1));
}

FuzzValue BuildValue(const Schema& member, ChoiceTape& tape, int depthBudget) {
  switch (member.GetType()) {
    case ShapeType::Boolean:
      return FuzzValue::Boolean(tape.Flip());
    case ShapeType::Byte:
      return FuzzValue::Integer(PickInteger(tape, INT8_MIN, INT8_MAX));
    case ShapeType::Short:
      return FuzzValue::Integer(PickInteger(tape, INT16_MIN, INT16_MAX));
    case ShapeType::Integer:
    case ShapeType::IntEnum:
      return FuzzValue::Integer(PickInteger(tape, INT32_MIN, INT32_MAX));
    case ShapeType::Long:
      return FuzzValue::Integer(PickInteger(tape, (std::numeric_limits<int64_t>::min)(), (std::numeric_limits<int64_t>::max)()));
    case ShapeType::Float:
      return FuzzValue::Double(static_cast<double>(PickFloat(tape)));
    case ShapeType::Double:
      return FuzzValue::Double(PickDouble(tape));
    case ShapeType::String:
    case ShapeType::Enum:
      return FuzzValue::String(tape.NextSizedString());
    case ShapeType::Blob: {
      const Aws::String bytes = tape.NextSizedString();
      return FuzzValue::Blob(Aws::Utils::ByteBuffer(reinterpret_cast<const unsigned char*>(bytes.data()), bytes.size()));
    }
    case ShapeType::Timestamp:
      return FuzzValue::Timestamp(Aws::Utils::DateTime(PickEpochMillis(tape)));
    case ShapeType::Document: {
      auto doc = BuildDocument(tape, depthBudget);
      // A null slot reads back absent and nothing is @sparse; nulls nested inside a document are kept.
      return FuzzValue::FromDocument(doc->IsNull() ? smithy::schema::Document::FromString("") : std::move(doc));
    }
    case ShapeType::List: {
      const auto element = member.GetMemberTarget().value()->GetMember("member").value();
      Aws::Vector<FuzzValue> items;
      const uint64_t count = depthBudget > 0 ? tape.NextCount(5) : 0;
      for (uint64_t i = 0; i < count; ++i) {
        items.push_back(BuildValue(*element, tape, depthBudget - 1));
      }
      return FuzzValue::List(std::move(items));
    }
    case ShapeType::Map: {
      const auto valueMember = member.GetMemberTarget().value()->GetMember("value").value();
      Aws::Map<Aws::String, FuzzValue> entries;
      const uint64_t count = depthBudget > 0 ? tape.NextCount(4) : 0;
      for (uint64_t i = 0; i < count; ++i) {
        Aws::String key = tape.NextString();
        FuzzValue value = BuildValue(*valueMember, tape, depthBudget - 1);
        entries.erase(key);
        entries.emplace(std::move(key), std::move(value));
      }
      return FuzzValue::Map(std::move(entries));
    }
    case ShapeType::Structure:
    case ShapeType::Union:
      return BuildStruct(*member.GetMemberTarget().value(), tape, depthBudget - 1);
    default:
      std::fprintf(stderr, "BuildValue: unhandled shape type %d\n", static_cast<int>(member.GetType()));
      std::abort();
  }
}

[[noreturn]] void MalformedTape(const std::string& path, const std::string& reason) {
  std::fprintf(stderr, "malformed tape %s: %s\n", path.c_str(), reason.c_str());
  std::abort();
}

std::string BracedBody(const std::string& path, const std::string& text, const std::string& label) {
  const size_t at = text.find(label);
  const size_t open = at == std::string::npos ? std::string::npos : text.find('{', at);
  if (open == std::string::npos) {
    MalformedTape(path, "missing " + label + " {...}");
  }
  bool quoted = false;
  for (size_t i = open + 1; i < text.size(); ++i) {
    const char c = text[i];
    if (quoted && c == '\\') {
      ++i;
    } else if (c == '"') {
      quoted = !quoted;
    } else if (!quoted && c == '}') {
      return text.substr(open + 1, i - open - 1);
    }
  }
  MalformedTape(path, "unterminated " + label);
}

std::vector<uint64_t> ParseChoices(const std::string& path, const std::string& body) {
  std::vector<uint64_t> choices;
  size_t at = body.find_first_not_of(" \t\r\n");
  while (at != std::string::npos) {
    char* end = nullptr;
    errno = 0;
    const unsigned long long value = std::strtoull(body.c_str() + at, &end, 10);
    if (end == body.c_str() + at || errno == ERANGE || body[at] == '-') {
      MalformedTape(path, "bad choice at offset " + std::to_string(at));
    }
    choices.push_back(static_cast<uint64_t>(value));
    at = body.find_first_not_of(" \t\r\n", static_cast<size_t>(end - body.c_str()));
    if (at != std::string::npos && body[at] != ',') {
      MalformedTape(path, "expected ',' at offset " + std::to_string(at));
    }
    at = at == std::string::npos ? at : body.find_first_not_of(" \t\r\n", at + 1);
  }
  return choices;
}

int HexDigit(char c) {
  if (c >= '0' && c <= '9') {
    return c - '0';
  }
  if (c >= 'a' && c <= 'f') {
    return c - 'a' + 10;
  }
  return c >= 'A' && c <= 'F' ? c - 'A' + 10 : -1;
}

size_t DecodeEscape(const std::string& path, const std::string& body, size_t at, std::string& out) {
  if (at >= body.size()) {
    MalformedTape(path, "dangling escape");
  }
  const char c = body[at];
  switch (c) {
    case 'n':
      out += '\n';
      return at + 1;
    case 't':
      out += '\t';
      return at + 1;
    case 'r':
      out += '\r';
      return at + 1;
    case '"':
    case '\'':
    case '\\':
    case '?':
      out += c;
      return at + 1;
    default:
      break;
  }
  int value = 0;
  size_t next = at;
  if (c == 'x') {
    for (next = at + 1; next < body.size() && next < at + 3 && HexDigit(body[next]) >= 0; ++next) {
      value = value * 16 + HexDigit(body[next]);
    }
    if (next == at + 1) {
      MalformedTape(path, "\\x without hex digits");
    }
  } else {
    for (; next < body.size() && next < at + 3 && body[next] >= '0' && body[next] <= '7'; ++next) {
      value = value * 8 + (body[next] - '0');
    }
    if (next == at) {
      MalformedTape(path, std::string("unknown escape \\") + c);
    }
  }
  out += static_cast<char>(value);
  return next;
}

std::vector<std::string> ParseStrings(const std::string& path, const std::string& body) {
  std::vector<std::string> strings;
  size_t at = body.find_first_not_of(" \t\r\n,");
  while (at != std::string::npos) {
    if (body[at] != '"') {
      MalformedTape(path, "expected '\"' at offset " + std::to_string(at));
    }
    std::string value;
    ++at;
    while (at < body.size() && body[at] != '"') {
      if (body[at] == '\\') {
        at = DecodeEscape(path, body, at + 1, value);
      } else {
        value += body[at++];
      }
    }
    if (at >= body.size()) {
      MalformedTape(path, "unterminated string");
    }
    strings.push_back(std::move(value));
    at = body.find_first_not_of(" \t\r\n,", at + 1);
  }
  return strings;
}

std::string ReadSeedFile(const std::filesystem::path& path) {
  Aws::IFStream in(path.string().c_str(), std::ios::binary);
  if (!in) {
    std::fprintf(stderr, "cannot read seed file %s\n", path.string().c_str());
    std::abort();
  }
  const std::string contents((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
  if (path.extension() != ".b64") {
    return contents;
  }
  Aws::String encoded;
  for (const char c : contents) {
    if (c != ' ' && c != '\t' && c != '\r' && c != '\n') {
      encoded += c;
    }
  }
  const auto decoded = Aws::Utils::HashingUtils::Base64Decode(encoded);
  if (Aws::Utils::HashingUtils::Base64Encode(decoded) != encoded) {
    std::fprintf(stderr, "seed file %s is not valid base64\n", path.string().c_str());
    std::abort();
  }
  return std::string(reinterpret_cast<const char*>(decoded.GetUnderlyingData()), decoded.GetLength());
}

// FuzzTest drops an oversized seed with only a warning.
std::string RequireFitsPayload(std::string bytes, const std::string& origin) {
  if (bytes.size() > MAX_PAYLOAD_BYTES) {
    std::fprintf(stderr, "seed %s is %zu bytes, over the %zu-byte payload limit\n", origin.c_str(), bytes.size(), MAX_PAYLOAD_BYTES);
    std::abort();
  }
  return bytes;
}

}  // namespace

Aws::String ChoiceTape::NextString() {
  if (m_strings.empty() || Below(3) == 0) {
    return EdgeStrings()[Below(EdgeStrings().size())];
  }
  const std::string& pooled = m_strings[m_nextString++ % m_strings.size()];
  return Aws::String(pooled.data(), pooled.size());
}

Aws::String ChoiceTape::NextSizedString() {
  const uint64_t selector = Below(16);
  Aws::String base = NextString();
  size_t target = 0;
  switch (selector) {
    case 1:
      target = 24;
      break;
    case 2:
      target = 256;
      break;
    case 3:
      target = 65536;
      break;
    default:
      return base;
  }
  if (!TakeBytes(target)) {
    return base;
  }
  if (base.empty()) {
    base = "a";
  }
  Aws::String sized;
  sized.reserve(target + base.size());
  while (sized.size() < target) {
    sized += base;
  }
  sized.resize(target);
  return sized;
}

uint64_t ChoiceTape::NextCount(uint64_t smallBound) {
  const uint64_t selector = Below(16);
  const uint64_t large = selector == 1 ? 24 : (selector == 2 ? 300 : 0);
  if (large != 0 && TakeElements(large)) {
    return large;
  }
  return Below(smallBound);
}

bool ChoiceTape::TakeBytes(size_t count) {
  const bool fits = count <= m_bytesLeft;
  m_bytesLeft -= fits ? count : 0;
  return fits;
}

bool ChoiceTape::TakeElements(size_t count) {
  const bool fits = count <= m_elementsLeft;
  m_elementsLeft -= fits ? count : 0;
  return fits;
}

void ChoiceTape::EnterBuild() {
  if (m_buildDepth == 0) {
    m_bytesLeft = VALUE_BYTE_BUDGET;
    m_elementsLeft = VALUE_ELEMENT_BUDGET;
  }
  ++m_buildDepth;
}

void ChoiceTape::LeaveBuild() { --m_buildDepth; }

FuzzValue BuildStruct(const Schema& structSchema, ChoiceTape& tape, int depthBudget) {
  tape.EnterBuild();
  FuzzValue result = FuzzValue::Struct();
  Aws::Vector<int> eligible;
  for (uint16_t i = 0; i < structSchema.GetMemberCount(); ++i) {
    const auto member = structSchema.GetMember(static_cast<int>(i)).value();
    if (depthBudget > 0 || !IsContainer(member->GetType())) {
      eligible.push_back(static_cast<int>(i));
    }
  }
  if (structSchema.GetType() == ShapeType::Union) {
    if (eligible.empty()) {
      std::fprintf(stderr, "BuildStruct: union %s has no eligible member\n", structSchema.GetId());
      std::abort();
    }
    const int index = eligible[tape.Below(eligible.size())];
    result.SetMember(index, BuildValue(*structSchema.GetMember(index).value(), tape, depthBudget));
  } else {
    for (int index : eligible) {
      if (tape.Flip()) {
        result.SetMember(index, BuildValue(*structSchema.GetMember(index).value(), tape, depthBudget));
      }
    }
  }
  tape.LeaveBuild();
  return result;
}

std::shared_ptr<const smithy::schema::Document> BuildDocument(ChoiceTape& tape, int depthBudget) {
  switch (tape.Below(depthBudget > 0 ? 7 : 5)) {
    case 0:
      return smithy::schema::Document::Null();
    case 1:
      return smithy::schema::Document::FromBoolean(tape.Flip());
    case 2:
      return smithy::schema::Document::FromInteger(
          PickInteger(tape, (std::numeric_limits<int64_t>::min)(), (std::numeric_limits<int64_t>::max)()));
    case 3:
      return smithy::schema::Document::FromDouble(PickDouble(tape));
    case 4:
      return smithy::schema::Document::FromString(tape.NextSizedString());
    case 5: {
      Aws::Vector<std::shared_ptr<const smithy::schema::Document>> items;
      const uint64_t count = tape.NextCount(4);
      for (uint64_t i = 0; i < count; ++i) {
        items.push_back(BuildDocument(tape, depthBudget - 1));
      }
      return smithy::schema::Document::FromList(std::move(items));
    }
    default: {
      Aws::Map<Aws::String, std::shared_ptr<const smithy::schema::Document>> fields;
      const uint64_t count = tape.NextCount(4);
      for (uint64_t i = 0; i < count; ++i) {
        Aws::String key = tape.NextString();
        fields[key] = BuildDocument(tape, depthBudget - 1);
      }
      return smithy::schema::Document::FromMap(std::move(fields));
    }
  }
}

std::vector<std::string> LoadDictionary(const char* fileName) {
  return fuzztest::ReadDictionaryFromFile(std::string(SCHEMA_FUZZ_DICTIONARY_DIR) + "/" + fileName);
}

std::vector<TapeSeed> TapeSeeds() {
  std::vector<uint64_t> ascending;
  for (uint64_t i = 0; i < 128; ++i) {
    ascending.push_back(i);
  }
  std::vector<uint64_t> alternating;
  for (uint64_t i = 0; i < 64; ++i) {
    alternating.push_back(i % 2 == 0 ? 0 : 3);
  }
  const std::vector<std::string> pool = {"seed", "\xCE\xBA\xCE\xBB\xCE\xB5\xCE\xB9\xCE\xB4\xCE\xAF", "<x>&amp;</x>"};
  return {
      TapeSeed{{}, {}},
      TapeSeed{alternating, pool},
      TapeSeed{std::vector<uint64_t>(64, 1), pool},
      TapeSeed{ascending, pool},
      TapeSeed{std::vector<uint64_t>(64, ~uint64_t{0}), pool},
      TapeSeed{std::vector<uint64_t>(64, uint64_t{1} << 63), {}},
  };
}

std::vector<TapeSeed> LoadTapes(const char* suiteTest) {
  const std::filesystem::path dir = std::filesystem::path(SCHEMA_FUZZ_FINDINGS_DIR) / suiteTest;
  std::vector<std::filesystem::path> files;
  if (std::filesystem::is_directory(dir)) {
    for (const auto& entry : std::filesystem::directory_iterator(dir)) {
      if (entry.path().extension() == ".tape") {
        files.push_back(entry.path());
      }
    }
  }
  std::sort(files.begin(), files.end());
  std::vector<TapeSeed> tapes;
  for (const auto& file : files) {
    Aws::IFStream in(file.string().c_str(), std::ios::binary);
    const std::string text((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
    const std::string path = file.string();
    tapes.emplace_back(ParseChoices(path, BracedBody(path, text, "choices:")), ParseStrings(path, BracedBody(path, text, "strings:")));
  }
  return tapes;
}

std::vector<TapeSeed> TapeSeeds(const char* suiteTest) {
  auto seeds = TapeSeeds();
  for (auto& tape : LoadTapes(suiteTest)) {
    seeds.push_back(std::move(tape));
  }
  return seeds;
}

Aws::String DeepNodePayload(const Codec& codec, int depth) {
  const auto node = FindFuzzSchema("Node");
  const int child = node->GetMember("child").value()->GetMemberIndex();
  FuzzValue value = FuzzValue::Struct();
  for (int level = 1; level < depth; ++level) {
    FuzzValue parent = FuzzValue::Struct();
    parent.SetMember(child, std::move(value));
    value = std::move(parent);
  }
  const auto payload = codec.Serialize(*node, DynamicStruct(node, std::move(value)));
  if (!payload.IsSuccess()) {
    std::fprintf(stderr, "DeepNodePayload: %s\n", payload.GetError().GetMessage().c_str());
    std::abort();
  }
  return payload.GetResult();
}

Aws::String DeepDocumentPayload(int depth) {
  const size_t lists = static_cast<size_t>(depth > 1 ? depth - 1 : 0);
  return "{\"value\":" + Aws::String(lists, '[') + Aws::String(lists, ']') + "}";
}

bool ReproFileSet() {
  const char* repro = std::getenv("SCHEMA_FUZZ_REPRO_FILE");
  return repro != nullptr && *repro != '\0';
}

std::vector<std::tuple<std::string>> ByteSeeds(const Codec& codec, const char* suiteTest) {
  std::vector<std::tuple<std::string>> seeds;
  if (ReproFileSet()) {
    const char* repro = std::getenv("SCHEMA_FUZZ_REPRO_FILE");
    if (!std::filesystem::is_regular_file(repro)) {
      std::fprintf(stderr, "SCHEMA_FUZZ_REPRO_FILE: cannot read %s\n", repro);
      std::abort();
    }
    std::string contents = ReadSeedFile(repro);
    if (contents.empty()) {
      std::fprintf(stderr, "SCHEMA_FUZZ_REPRO_FILE: %s is empty\n", repro);
      std::abort();
    }
    seeds.emplace_back(RequireFitsPayload(std::move(contents), repro));
    return seeds;
  }
  for (const auto& tapeSeed : TapeSeeds()) {
    for (const auto& schema : FuzzSchemas()) {
      ChoiceTape tape(std::get<0>(tapeSeed), std::get<1>(tapeSeed));
      DynamicStruct shape(schema, BuildStruct(*schema, tape));
      const auto payload = codec.Serialize(*schema, shape);
      if (payload.IsSuccess() && payload.GetResult().size() <= MAX_PAYLOAD_BYTES) {
        seeds.emplace_back(std::string(payload.GetResult().data(), payload.GetResult().size()));
      }
    }
  }
  // Mutation rarely builds deep, balanced nesting.
  const Aws::String deep = DeepNodePayload(codec, DEEP_SEED_DEPTH);
  seeds.emplace_back(RequireFitsPayload(std::string(deep.data(), deep.size()), "DeepNodePayload"));
  const std::string corpus = std::string(SCHEMA_FUZZ_CORPUS_DIR) + "/" + suiteTest;
  std::vector<std::filesystem::path> files;
  if (std::filesystem::is_directory(corpus)) {
    for (const auto& entry : std::filesystem::directory_iterator(corpus)) {
      files.push_back(entry.path());
    }
  }
  std::sort(files.begin(), files.end());
  for (const auto& file : files) {
    seeds.emplace_back(RequireFitsPayload(ReadSeedFile(file), file.string()));
  }
  return seeds;
}

std::vector<std::tuple<std::string>> JsonByteSeeds(const char* suiteTest) {
  auto seeds = ByteSeeds(JsonCodec(), suiteTest);
  if (!ReproFileSet()) {
    const Aws::String deep = DeepDocumentPayload(DEEP_SEED_DEPTH);
    seeds.emplace_back(RequireFitsPayload(std::string(deep.data(), deep.size()), "DeepDocumentPayload"));
  }
  return seeds;
}

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
