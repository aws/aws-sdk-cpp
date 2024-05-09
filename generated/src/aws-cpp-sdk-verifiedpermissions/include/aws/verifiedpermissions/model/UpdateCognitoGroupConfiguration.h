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
   * <p>The user group entities from an Amazon Cognito user pool identity
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdateCognitoGroupConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateCognitoGroupConfiguration
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdateCognitoGroupConfiguration();
    AWS_VERIFIEDPERMISSIONS_API UpdateCognitoGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API UpdateCognitoGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline UpdateCognitoGroupConfiguration& WithGroupEntityType(const Aws::String& value) { SetGroupEntityType(value); return *this;}

    /**
     * <p>The name of the schema entity type that's mapped to the user pool group.
     * Defaults to <code>AWS::CognitoGroup</code>.</p>
     */
    inline UpdateCognitoGroupConfiguration& WithGroupEntityType(Aws::String&& value) { SetGroupEntityType(std::move(value)); return *this;}

    /**
     * <p>The name of the schema entity type that's mapped to the user pool group.
     * Defaults to <code>AWS::CognitoGroup</code>.</p>
     */
    inline UpdateCognitoGroupConfiguration& WithGroupEntityType(const char* value) { SetGroupEntityType(value); return *this;}

  private:

    Aws::String m_groupEntityType;
    bool m_groupEntityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
