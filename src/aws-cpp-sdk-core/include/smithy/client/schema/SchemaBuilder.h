#pragma once

#include <aws/core/utils/memory/AWSMemory.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Schema.h>

#include <memory>

namespace smithy {
namespace schema {

// Assembles a shape that carries members (structure, union, list, map). Members
// may target shapes that are already built, or other builders that are not yet
// built to describe recursive shapes. Once Build() is called the builder is
// spent. Move-only; obtained from Schema::StructureBuilder and friends.
class SMITHY_API SchemaBuilder final {
 public:
  ~SchemaBuilder();
  SchemaBuilder(SchemaBuilder&&) noexcept;
  SchemaBuilder& operator=(SchemaBuilder&&) noexcept;

  SchemaBuilder& PutMember(const char* name, std::shared_ptr<const Schema> target, TraitList traits = {});
  SchemaBuilder& PutMember(const char* name, SchemaBuilder& target, TraitList traits = {});

  std::shared_ptr<const Schema> Build();

 private:
  friend class Schema;
  class SchemaBuilderImpl;

  explicit SchemaBuilder(Aws::UniquePtr<SchemaBuilderImpl> impl);

  Aws::UniquePtr<SchemaBuilderImpl> m_impl;

  SchemaBuilder(const SchemaBuilder&) = delete;
  SchemaBuilder& operator=(const SchemaBuilder&) = delete;
};

}  // namespace schema
}  // namespace smithy
