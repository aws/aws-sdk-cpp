/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>The type of entity that a policy store maps to groups from an Amazon Cognito
   * user pool identity source.</p> <p>This data type is part of an <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CognitoUserPoolConfigurationDetail.html">CognitoUserPoolConfigurationItem</a>
   * structure and is a response parameter to <a
   * href="http://forums.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListIdentitySources.html">ListIdentitySources</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/CognitoGroupConfigurationItem">AWS
   * API Reference</a></p>
   */
  class CognitoGroupConfigurationItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API CognitoGroupConfigurationItem();
    AWS_VERIFIEDPERMISSIONS_API CognitoGroupConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API CognitoGroupConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the schema entity type that's mapped to the user pool group.
     * Defaults to <code>AWS::CognitoGroup</code>.</p>
     */
    inline const Aws::String& GetGroupEntityType() const{ return m_groupEntityType; }

    /**
     * <p>The name of the schema entity type that's mapped to the user pool group.
     * Defaults to <code>AWS::CognitoGroup</code>.</p>
     */
    inline bool GroupEntityTypeHasBeenSet() const { return m_groupEntityTypeHasBeenSet; }

    /**
     * <p>The name of the schema entity type that's mapped to the user pool group.
     * Defaults to <code>AWS::CognitoGroup</code>.</p>
     */
    inline void SetGroupEntityType(const Aws::String& value) { m_groupEntityTypeHasBeenSet = true; m_groupEntityType = value; }

    /**
     * <p>The name of the schema entity type that's mapped to the user pool group.
     * Defaults to <code>AWS::CognitoGroup</code>.</p>
     */
    inline void SetGroupEntityType(Aws::String&& value) { m_groupEntityTypeHasBeenSet = true; m_groupEntityType = std::move(value); }

    /**
     * <p>The name of the schema entity type that's mapped to the user pool group.
     * Defaults to <code>AWS::CognitoGroup</code>.</p>
     */
    inline void SetGroupEntityType(const char* value) { m_groupEntityTypeHasBeenSet = true; m_groupEntityType.assign(value); }

    /**
     * <p>The name of the schema entity type that's mapped to the user pool group.
     * Defaults to <code>AWS::CognitoGroup</code>.</p>
     */
    inline CognitoGroupConfigurationItem& WithGroupEntityType(const Aws::String& value) { SetGroupEntityType(value); return *this;}

    /**
     * <p>The name of the schema entity type that's mapped to the user pool group.
     * Defaults to <code>AWS::CognitoGroup</code>.</p>
     */
    inline CognitoGroupConfigurationItem& WithGroupEntityType(Aws::String&& value) { SetGroupEntityType(std::move(value)); return *this;}

    /**
     * <p>The name of the schema entity type that's mapped to the user pool group.
     * Defaults to <code>AWS::CognitoGroup</code>.</p>
     */
    inline CognitoGroupConfigurationItem& WithGroupEntityType(const char* value) { SetGroupEntityType(value); return *this;}

  private:

    Aws::String m_groupEntityType;
    bool m_groupEntityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
