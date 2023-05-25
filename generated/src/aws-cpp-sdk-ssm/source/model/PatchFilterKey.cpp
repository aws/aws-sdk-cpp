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

        static const int ARCH_HASH = HashingUtils::HashString("ARCH");
        static const int ADVISORY_ID_HASH = HashingUtils::HashString("ADVISORY_ID");
        static const int BUGZILLA_ID_HASH = HashingUtils::HashString("BUGZILLA_ID");
        static const int PATCH_SET_HASH = HashingUtils::HashString("PATCH_SET");
        static const int PRODUCT_HASH = HashingUtils::HashString("PRODUCT");
        static const int PRODUCT_FAMILY_HASH = HashingUtils::HashString("PRODUCT_FAMILY");
        static const int CLASSIFICATION_HASH = HashingUtils::HashString("CLASSIFICATION");
        static const int CVE_ID_HASH = HashingUtils::HashString("CVE_ID");
        static const int EPOCH_HASH = HashingUtils::HashString("EPOCH");
        static const int MSRC_SEVERITY_HASH = HashingUtils::HashString("MSRC_SEVERITY");
        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int PATCH_ID_HASH = HashingUtils::HashString("PATCH_ID");
        static const int SECTION_HASH = HashingUtils::HashString("SECTION");
        static const int PRIORITY_HASH = HashingUtils::HashString("PRIORITY");
        static const int REPOSITORY_HASH = HashingUtils::HashString("REPOSITORY");
        static const int RELEASE_HASH = HashingUtils::HashString("RELEASE");
        static const int SEVERITY_HASH = HashingUtils::HashString("SEVERITY");
        static const int SECURITY_HASH = HashingUtils::HashString("SECURITY");
        static const int VERSION_HASH = HashingUtils::HashString("VERSION");


        PatchFilterKey GetPatchFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
