/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ReplicationConfigurationEbsEncryption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace ReplicationConfigurationEbsEncryptionMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        ReplicationConfigurationEbsEncryption GetReplicationConfigurationEbsEncryptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return ReplicationConfigurationEbsEncryption::DEFAULT;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ReplicationConfigurationEbsEncryption::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationConfigurationEbsEncryption>(hashCode);
          }

          return ReplicationConfigurationEbsEncryption::NOT_SET;
        }

        Aws::String GetNameForReplicationConfigurationEbsEncryption(ReplicationConfigurationEbsEncryption enumValue)
        {
          switch(enumValue)
          {
          case ReplicationConfigurationEbsEncryption::NOT_SET:
            return {};
          case ReplicationConfigurationEbsEncryption::DEFAULT:
            return "DEFAULT";
          case ReplicationConfigurationEbsEncryption::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationConfigurationEbsEncryptionMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
