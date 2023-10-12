/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace PatchFilterKeyMapper
      {

        static constexpr uint32_t ARCH_HASH = ConstExprHashingUtils::HashString("ARCH");
        static constexpr uint32_t ADVISORY_ID_HASH = ConstExprHashingUtils::HashString("ADVISORY_ID");
        static constexpr uint32_t BUGZILLA_ID_HASH = ConstExprHashingUtils::HashString("BUGZILLA_ID");
        static constexpr uint32_t PATCH_SET_HASH = ConstExprHashingUtils::HashString("PATCH_SET");
        static constexpr uint32_t PRODUCT_HASH = ConstExprHashingUtils::HashString("PRODUCT");
        static constexpr uint32_t PRODUCT_FAMILY_HASH = ConstExprHashingUtils::HashString("PRODUCT_FAMILY");
        static constexpr uint32_t CLASSIFICATION_HASH = ConstExprHashingUtils::HashString("CLASSIFICATION");
        static constexpr uint32_t CVE_ID_HASH = ConstExprHashingUtils::HashString("CVE_ID");
        static constexpr uint32_t EPOCH_HASH = ConstExprHashingUtils::HashString("EPOCH");
        static constexpr uint32_t MSRC_SEVERITY_HASH = ConstExprHashingUtils::HashString("MSRC_SEVERITY");
        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t PATCH_ID_HASH = ConstExprHashingUtils::HashString("PATCH_ID");
        static constexpr uint32_t SECTION_HASH = ConstExprHashingUtils::HashString("SECTION");
        static constexpr uint32_t PRIORITY_HASH = ConstExprHashingUtils::HashString("PRIORITY");
        static constexpr uint32_t REPOSITORY_HASH = ConstExprHashingUtils::HashString("REPOSITORY");
        static constexpr uint32_t RELEASE_HASH = ConstExprHashingUtils::HashString("RELEASE");
        static constexpr uint32_t SEVERITY_HASH = ConstExprHashingUtils::HashString("SEVERITY");
        static constexpr uint32_t SECURITY_HASH = ConstExprHashingUtils::HashString("SECURITY");
        static constexpr uint32_t VERSION_HASH = ConstExprHashingUtils::HashString("VERSION");


        PatchFilterKey GetPatchFilterKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ARCH_HASH)
          {
            return PatchFilterKey::ARCH;
          }
          else if (hashCode == ADVISORY_ID_HASH)
          {
            return PatchFilterKey::ADVISORY_ID;
          }
          else if (hashCode == BUGZILLA_ID_HASH)
          {
            return PatchFilterKey::BUGZILLA_ID;
          }
          else if (hashCode == PATCH_SET_HASH)
          {
            return PatchFilterKey::PATCH_SET;
          }
          else if (hashCode == PRODUCT_HASH)
          {
            return PatchFilterKey::PRODUCT;
          }
          else if (hashCode == PRODUCT_FAMILY_HASH)
          {
            return PatchFilterKey::PRODUCT_FAMILY;
          }
          else if (hashCode == CLASSIFICATION_HASH)
          {
            return PatchFilterKey::CLASSIFICATION;
          }
          else if (hashCode == CVE_ID_HASH)
          {
            return PatchFilterKey::CVE_ID;
          }
          else if (hashCode == EPOCH_HASH)
          {
            return PatchFilterKey::EPOCH;
          }
          else if (hashCode == MSRC_SEVERITY_HASH)
          {
            return PatchFilterKey::MSRC_SEVERITY;
          }
          else if (hashCode == NAME_HASH)
          {
            return PatchFilterKey::NAME;
          }
          else if (hashCode == PATCH_ID_HASH)
          {
            return PatchFilterKey::PATCH_ID;
          }
          else if (hashCode == SECTION_HASH)
          {
            return PatchFilterKey::SECTION;
          }
          else if (hashCode == PRIORITY_HASH)
          {
            return PatchFilterKey::PRIORITY;
          }
          else if (hashCode == REPOSITORY_HASH)
          {
            return PatchFilterKey::REPOSITORY;
          }
          else if (hashCode == RELEASE_HASH)
          {
            return PatchFilterKey::RELEASE;
          }
          else if (hashCode == SEVERITY_HASH)
          {
            return PatchFilterKey::SEVERITY;
          }
          else if (hashCode == SECURITY_HASH)
          {
            return PatchFilterKey::SECURITY;
          }
          else if (hashCode == VERSION_HASH)
          {
            return PatchFilterKey::VERSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchFilterKey>(hashCode);
          }

          return PatchFilterKey::NOT_SET;
        }

        Aws::String GetNameForPatchFilterKey(PatchFilterKey enumValue)
        {
          switch(enumValue)
          {
          case PatchFilterKey::NOT_SET:
            return {};
          case PatchFilterKey::ARCH:
            return "ARCH";
          case PatchFilterKey::ADVISORY_ID:
            return "ADVISORY_ID";
          case PatchFilterKey::BUGZILLA_ID:
            return "BUGZILLA_ID";
          case PatchFilterKey::PATCH_SET:
            return "PATCH_SET";
          case PatchFilterKey::PRODUCT:
            return "PRODUCT";
          case PatchFilterKey::PRODUCT_FAMILY:
            return "PRODUCT_FAMILY";
          case PatchFilterKey::CLASSIFICATION:
            return "CLASSIFICATION";
          case PatchFilterKey::CVE_ID:
            return "CVE_ID";
          case PatchFilterKey::EPOCH:
            return "EPOCH";
          case PatchFilterKey::MSRC_SEVERITY:
            return "MSRC_SEVERITY";
          case PatchFilterKey::NAME:
            return "NAME";
          case PatchFilterKey::PATCH_ID:
            return "PATCH_ID";
          case PatchFilterKey::SECTION:
            return "SECTION";
          case PatchFilterKey::PRIORITY:
            return "PRIORITY";
          case PatchFilterKey::REPOSITORY:
            return "REPOSITORY";
          case PatchFilterKey::RELEASE:
            return "RELEASE";
          case PatchFilterKey::SEVERITY:
            return "SEVERITY";
          case PatchFilterKey::SECURITY:
            return "SECURITY";
          case PatchFilterKey::VERSION:
            return "VERSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PatchFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
