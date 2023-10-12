/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/HandshakeResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace HandshakeResourceTypeMapper
      {

        static constexpr uint32_t ACCOUNT_HASH = ConstExprHashingUtils::HashString("ACCOUNT");
        static constexpr uint32_t ORGANIZATION_HASH = ConstExprHashingUtils::HashString("ORGANIZATION");
        static constexpr uint32_t ORGANIZATION_FEATURE_SET_HASH = ConstExprHashingUtils::HashString("ORGANIZATION_FEATURE_SET");
        static constexpr uint32_t EMAIL_HASH = ConstExprHashingUtils::HashString("EMAIL");
        static constexpr uint32_t MASTER_EMAIL_HASH = ConstExprHashingUtils::HashString("MASTER_EMAIL");
        static constexpr uint32_t MASTER_NAME_HASH = ConstExprHashingUtils::HashString("MASTER_NAME");
        static constexpr uint32_t NOTES_HASH = ConstExprHashingUtils::HashString("NOTES");
        static constexpr uint32_t PARENT_HANDSHAKE_HASH = ConstExprHashingUtils::HashString("PARENT_HANDSHAKE");


        HandshakeResourceType GetHandshakeResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return HandshakeResourceType::ACCOUNT;
          }
          else if (hashCode == ORGANIZATION_HASH)
          {
            return HandshakeResourceType::ORGANIZATION;
          }
          else if (hashCode == ORGANIZATION_FEATURE_SET_HASH)
          {
            return HandshakeResourceType::ORGANIZATION_FEATURE_SET;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return HandshakeResourceType::EMAIL;
          }
          else if (hashCode == MASTER_EMAIL_HASH)
          {
            return HandshakeResourceType::MASTER_EMAIL;
          }
          else if (hashCode == MASTER_NAME_HASH)
          {
            return HandshakeResourceType::MASTER_NAME;
          }
          else if (hashCode == NOTES_HASH)
          {
            return HandshakeResourceType::NOTES;
          }
          else if (hashCode == PARENT_HANDSHAKE_HASH)
          {
            return HandshakeResourceType::PARENT_HANDSHAKE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HandshakeResourceType>(hashCode);
          }

          return HandshakeResourceType::NOT_SET;
        }

        Aws::String GetNameForHandshakeResourceType(HandshakeResourceType enumValue)
        {
          switch(enumValue)
          {
          case HandshakeResourceType::NOT_SET:
            return {};
          case HandshakeResourceType::ACCOUNT:
            return "ACCOUNT";
          case HandshakeResourceType::ORGANIZATION:
            return "ORGANIZATION";
          case HandshakeResourceType::ORGANIZATION_FEATURE_SET:
            return "ORGANIZATION_FEATURE_SET";
          case HandshakeResourceType::EMAIL:
            return "EMAIL";
          case HandshakeResourceType::MASTER_EMAIL:
            return "MASTER_EMAIL";
          case HandshakeResourceType::MASTER_NAME:
            return "MASTER_NAME";
          case HandshakeResourceType::NOTES:
            return "NOTES";
          case HandshakeResourceType::PARENT_HANDSHAKE:
            return "PARENT_HANDSHAKE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HandshakeResourceTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
