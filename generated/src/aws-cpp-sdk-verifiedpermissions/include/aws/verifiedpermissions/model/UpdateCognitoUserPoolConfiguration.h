/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains configuration details of a Amazon Cognito user pool for use with an
   * identity source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdateCognitoUserPoolConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateCognitoUserPoolConfiguration
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdateCognitoUserPoolConfiguration();
    AWS_VERIFIEDPERMISSIONS_API UpdateCognitoUserPoolConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API UpdateCognitoUserPoolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool associated with this
     * identity source.</p>
     */
    inline const Aws::String& GetUserPoolArn() const{ return m_userPoolArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool associated with this
     * identity source.</p>
     */
    inline bool UserPoolArnHasBeenSet() const { return m_userPoolArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool associated with this
     * identity source.</p>
     */
    inline void SetUserPoolArn(const Aws::String& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool associated with this
     * identity source.</p>
     */
    inline void SetUserPoolArn(Aws::String&& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool associated with this
     * identity source.</p>
     */
    inline void SetUserPoolArn(const char* value) { m_userPoolArnHasBeenSet = true; m_userPoolArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool associated with this
     * identity source.</p>
     */
    inline UpdateCognitoUserPoolConfiguration& WithUserPoolArn(const Aws::String& value) { SetUserPoolArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool associated with this
     * identity source.</p>
     */
    inline UpdateCognitoUserPoolConfiguration& WithUserPoolArn(Aws::String&& value) { SetUserPoolArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool associated with this
     * identity source.</p>
     */
    inline UpdateCognitoUserPoolConfiguration& WithUserPoolArn(const char* value) { SetUserPoolArn(value); return *this;}


    /**
     * <p>The client ID of an app client that is configured for the specified Amazon
     * Cognito user pool.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIds() const{ return m_clientIds; }

    /**
     * <p>The client ID of an app client that is configured for the specified Amazon
     * Cognito user pool.</p>
     */
    inline bool ClientIdsHasBeenSet() const { return m_clientIdsHasBeenSet; }

    /**
     * <p>The client ID of an app client that is configured for the specified Amazon
     * Cognito user pool.</p>
     */
    inline void SetClientIds(const Aws::Vector<Aws::String>& value) { m_clientIdsHasBeenSet = true; m_clientIds = value; }

    /**
     * <p>The client ID of an app client that is configured for the specified Amazon
     * Cognito user pool.</p>
     */
    inline void SetClientIds(Aws::Vector<Aws::String>&& value) { m_clientIdsHasBeenSet = true; m_clientIds = std::move(value); }

    /**
     * <p>The client ID of an app client that is configured for the specified Amazon
     * Cognito user pool.</p>
     */
    inline UpdateCognitoUserPoolConfiguration& WithClientIds(const Aws::Vector<Aws::String>& value) { SetClientIds(value); return *this;}

    /**
     * <p>The client ID of an app client that is configured for the specified Amazon
     * Cognito user pool.</p>
     */
    inline UpdateCognitoUserPoolConfiguration& WithClientIds(Aws::Vector<Aws::String>&& value) { SetClientIds(std::move(value)); return *this;}

    /**
     * <p>The client ID of an app client that is configured for the specified Amazon
     * Cognito user pool.</p>
     */
    inline UpdateCognitoUserPoolConfiguration& AddClientIds(const Aws::String& value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(value); return *this; }

    /**
     * <p>The client ID of an app client that is configured for the specified Amazon
     * Cognito user pool.</p>
     */
    inline UpdateCognitoUserPoolConfiguration& AddClientIds(Aws::String&& value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The client ID of an app client that is configured for the specified Amazon
     * Cognito user pool.</p>
     */
    inline UpdateCognitoUserPoolConfiguration& AddClientIds(const char* value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(value); return *this; }

  private:

    Aws::String m_userPoolArn;
    bool m_userPoolArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientIds;
    bool m_clientIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
