#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Optional.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SerdeTraits.h>

#include <cmath>
#include <cstdint>
#include <functional>
#include <limits>
#include <memory>

namespace smithy {
namespace schema {

using DeserializerError = Aws::Client::AWSError<Aws::Client::CoreErrors>;

class SMITHY_API ShapeDeserializer {
 public:
  virtual ~ShapeDeserializer() = default;

  using StructMemberConsumer = std::function<void(const Schema& memberSchema, ShapeDeserializer& deserializer)>;

  using ListElementConsumer = std::function<void(ShapeDeserializer& deserializer)>;

  using MapEntryConsumer = std::function<void(const Aws::String& key, ShapeDeserializer& deserializer)>;

  virtual void ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) = 0;
  virtual void ReadList(const Schema& schema, const ListElementConsumer& consumer) = 0;
  virtual void ReadMap(const Schema& schema, const MapEntryConsumer& consumer) = 0;

  virtual Aws::Crt::Optional<bool> ReadBoolean(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<int> ReadInteger(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<int64_t> ReadLong(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<float> ReadFloat(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<double> ReadDouble(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<Aws::String> ReadString(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<Aws::Utils::DateTime> ReadTimestamp(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<Aws::Utils::ByteBuffer> ReadBlob(const Schema& schema) = 0;
  virtual std::shared_ptr<const Document> ReadDocument(const Schema& schema) = 0;

  virtual bool IsNull() = 0;

  // First failure wins; once set, reads return empty.
  virtual Aws::Crt::Optional<DeserializerError> GetError() const { return m_error; }

 protected:
  void Fail(const Aws::String& message) {
    if (!m_error.has_value()) {
      m_error = DeserializerError(Aws::Client::CoreErrors::INTERNAL_FAILURE, "SerializationException", message, false);
    }
  }
  bool HasFailed() const { return m_error.has_value(); }
  bool AtRoot() const { return m_depth == 0; }

  void FailUnrepresentable(const char* type) { Fail(Aws::String("Value out of range for ") + type); }

  // Call before delivering each non-null modeled member; a second member of a union fails the read.
  bool AdmitMember(const Schema& schema, bool& delivered) {
    if (delivered && schema.GetType() == ShapeType::Union) {
      Fail("Union has more than one member set");
      return false;
    }
    delivered = true;
    return true;
  }

  Aws::Crt::Optional<int> NarrowToInt(int64_t value) {
    if (value < (std::numeric_limits<int>::min)() || value > (std::numeric_limits<int>::max)()) {
      FailUnrepresentable("integer");
      return {};
    }
    return static_cast<int>(value);
  }

  // Float text printed to 9 digits can parse just above FLT_MAX, so values below the rounding point to infinity clamp.
  Aws::Crt::Optional<float> NarrowToFloat(double value) {
    const float floatMax = (std::numeric_limits<float>::max)();
    const double roundsToInfinity = static_cast<double>(floatMax) + std::ldexp(1.0, 103);
    if (std::isfinite(value) && std::fabs(value) > static_cast<double>(floatMax)) {
      if (std::fabs(value) >= roundsToInfinity) {
        FailUnrepresentable("float");
        return {};
      }
      return value < 0 ? -floatMax : floatMax;
    }
    return static_cast<float>(value);
  }

  // Out-of-range integer text fails the read; other non-integer text just returns empty.
  Aws::Crt::Optional<int64_t> ParseLong(const Aws::String& text) {
    const auto value = Aws::Utils::StringUtils::ParseInt64(text);
    if (!value.has_value() && IsPlainInteger(text)) {
      FailUnrepresentable("long");
    }
    return value;
  }

  // Must accept what strtoll does.
  static bool IsPlainInteger(const Aws::String& text) {
    size_t start = text.find_first_not_of(" \t\n\v\f\r");
    if (start == Aws::String::npos) {
      return false;
    }
    if (text[start] == '-' || text[start] == '+') {
      ++start;
    }
    return text.size() > start && text.find_first_not_of("0123456789", start) == Aws::String::npos;
  }

  Aws::Crt::Optional<Aws::Utils::DateTime> EpochSecondsToTimestamp(double seconds) {
    auto parsed = EpochSecondsToDateTime(seconds);
    if (!parsed.has_value()) {
      FailUnrepresentable("timestamp");
    }
    return parsed;
  }

  class ContainerScope final {
   public:
    explicit ContainerScope(ShapeDeserializer& owner) : m_owner(owner), m_entered(owner.EnterContainer()) {}
    ~ContainerScope() {
      if (m_entered) {
        --m_owner.m_depth;
      }
    }
    ContainerScope(const ContainerScope&) = delete;
    ContainerScope& operator=(const ContainerScope&) = delete;
    bool Entered() const { return m_entered; }

   private:
    ShapeDeserializer& m_owner;
    bool m_entered;
  };

 private:
  bool EnterContainer() {
    if (HasFailed()) {
      return false;
    }
    if (m_depth >= MAX_NESTING_DEPTH) {
      Fail("Maximum nesting depth exceeded");
      return false;
    }
    ++m_depth;
    return true;
  }

  Aws::Crt::Optional<DeserializerError> m_error;
  int m_depth = 0;
};

}  // namespace schema
}  // namespace smithy
