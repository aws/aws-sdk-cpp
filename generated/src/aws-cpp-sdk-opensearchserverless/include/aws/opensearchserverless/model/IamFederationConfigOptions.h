/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>Describes IAM federation options for an OpenSearch Serverless security
   * configuration in the form of a key-value map. These options define how
   * OpenSearch Serverless integrates with external identity providers using
   * federation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/IamFederationConfigOptions">AWS
   * API Reference</a></p>
   */
  class IamFederationConfigOptions
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API IamFederationConfigOptions() = default;
    AWS_OPENSEARCHSERVERLESS_API IamFederationConfigOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API IamFederationConfigOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The group attribute for this IAM federation integration. This attribute is
     * used to map identity provider groups to OpenSearch Serverless permissions.</p>
     */
    inline const Aws::String& GetGroupAttribute() const { return m_groupAttribute; }
    inline bool GroupAttributeHasBeenSet() const { return m_groupAttributeHasBeenSet; }
    template<typename GroupAttributeT = Aws::String>
    void SetGroupAttribute(GroupAttributeT&& value) { m_groupAttributeHasBeenSet = true; m_groupAttribute = std::forward<GroupAttributeT>(value); }
    template<typename GroupAttributeT = Aws::String>
    IamFederationConfigOptions& WithGroupAttribute(GroupAttributeT&& value) { SetGroupAttribute(std::forward<GroupAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user attribute for this IAM federation integration. This attribute is
     * used to identify users in the federated authentication process.</p>
     */
    inline const Aws::String& GetUserAttribute() const { return m_userAttribute; }
    inline bool UserAttributeHasBeenSet() const { return m_userAttributeHasBeenSet; }
    template<typename UserAttributeT = Aws::String>
    void SetUserAttribute(UserAttributeT&& value) { m_userAttributeHasBeenSet = true; m_userAttribute = std::forward<UserAttributeT>(value); }
    template<typename UserAttributeT = Aws::String>
    IamFederationConfigOptions& WithUserAttribute(UserAttributeT&& value) { SetUserAttribute(std::forward<UserAttributeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupAttribute;
    bool m_groupAttributeHasBeenSet = false;

    Aws::String m_userAttribute;
    bool m_userAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
