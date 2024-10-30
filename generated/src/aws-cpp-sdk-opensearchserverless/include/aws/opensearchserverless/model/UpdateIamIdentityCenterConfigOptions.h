/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/IamIdentityCenterGroupAttribute.h>
#include <aws/opensearchserverless/model/IamIdentityCenterUserAttribute.h>
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
   * <p>Describes IAM Identity Center options for updating an OpenSearch Serverless
   * security configuration in the form of a key-value map.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateIamIdentityCenterConfigOptions">AWS
   * API Reference</a></p>
   */
  class UpdateIamIdentityCenterConfigOptions
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateIamIdentityCenterConfigOptions();
    AWS_OPENSEARCHSERVERLESS_API UpdateIamIdentityCenterConfigOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API UpdateIamIdentityCenterConfigOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The group attribute for this IAM Identity Center integration. Defaults to
     * <code>GroupId</code>.</p>
     */
    inline const IamIdentityCenterGroupAttribute& GetGroupAttribute() const{ return m_groupAttribute; }
    inline bool GroupAttributeHasBeenSet() const { return m_groupAttributeHasBeenSet; }
    inline void SetGroupAttribute(const IamIdentityCenterGroupAttribute& value) { m_groupAttributeHasBeenSet = true; m_groupAttribute = value; }
    inline void SetGroupAttribute(IamIdentityCenterGroupAttribute&& value) { m_groupAttributeHasBeenSet = true; m_groupAttribute = std::move(value); }
    inline UpdateIamIdentityCenterConfigOptions& WithGroupAttribute(const IamIdentityCenterGroupAttribute& value) { SetGroupAttribute(value); return *this;}
    inline UpdateIamIdentityCenterConfigOptions& WithGroupAttribute(IamIdentityCenterGroupAttribute&& value) { SetGroupAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user attribute for this IAM Identity Center integration. Defaults to
     * <code>UserId</code>.</p>
     */
    inline const IamIdentityCenterUserAttribute& GetUserAttribute() const{ return m_userAttribute; }
    inline bool UserAttributeHasBeenSet() const { return m_userAttributeHasBeenSet; }
    inline void SetUserAttribute(const IamIdentityCenterUserAttribute& value) { m_userAttributeHasBeenSet = true; m_userAttribute = value; }
    inline void SetUserAttribute(IamIdentityCenterUserAttribute&& value) { m_userAttributeHasBeenSet = true; m_userAttribute = std::move(value); }
    inline UpdateIamIdentityCenterConfigOptions& WithUserAttribute(const IamIdentityCenterUserAttribute& value) { SetUserAttribute(value); return *this;}
    inline UpdateIamIdentityCenterConfigOptions& WithUserAttribute(IamIdentityCenterUserAttribute&& value) { SetUserAttribute(std::move(value)); return *this;}
    ///@}
  private:

    IamIdentityCenterGroupAttribute m_groupAttribute;
    bool m_groupAttributeHasBeenSet = false;

    IamIdentityCenterUserAttribute m_userAttribute;
    bool m_userAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
