/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Source Server connector action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SourceServerConnectorAction">AWS
   * API Reference</a></p>
   */
  class SourceServerConnectorAction
  {
  public:
    AWS_MGN_API SourceServerConnectorAction();
    AWS_MGN_API SourceServerConnectorAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API SourceServerConnectorAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Source Server connector action connector arn.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }

    /**
     * <p>Source Server connector action connector arn.</p>
     */
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }

    /**
     * <p>Source Server connector action connector arn.</p>
     */
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArnHasBeenSet = true; m_connectorArn = value; }

    /**
     * <p>Source Server connector action connector arn.</p>
     */
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::move(value); }

    /**
     * <p>Source Server connector action connector arn.</p>
     */
    inline void SetConnectorArn(const char* value) { m_connectorArnHasBeenSet = true; m_connectorArn.assign(value); }

    /**
     * <p>Source Server connector action connector arn.</p>
     */
    inline SourceServerConnectorAction& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}

    /**
     * <p>Source Server connector action connector arn.</p>
     */
    inline SourceServerConnectorAction& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}

    /**
     * <p>Source Server connector action connector arn.</p>
     */
    inline SourceServerConnectorAction& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}


    /**
     * <p>Source Server connector action credentials secret arn.</p>
     */
    inline const Aws::String& GetCredentialsSecretArn() const{ return m_credentialsSecretArn; }

    /**
     * <p>Source Server connector action credentials secret arn.</p>
     */
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }

    /**
     * <p>Source Server connector action credentials secret arn.</p>
     */
    inline void SetCredentialsSecretArn(const Aws::String& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = value; }

    /**
     * <p>Source Server connector action credentials secret arn.</p>
     */
    inline void SetCredentialsSecretArn(Aws::String&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::move(value); }

    /**
     * <p>Source Server connector action credentials secret arn.</p>
     */
    inline void SetCredentialsSecretArn(const char* value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn.assign(value); }

    /**
     * <p>Source Server connector action credentials secret arn.</p>
     */
    inline SourceServerConnectorAction& WithCredentialsSecretArn(const Aws::String& value) { SetCredentialsSecretArn(value); return *this;}

    /**
     * <p>Source Server connector action credentials secret arn.</p>
     */
    inline SourceServerConnectorAction& WithCredentialsSecretArn(Aws::String&& value) { SetCredentialsSecretArn(std::move(value)); return *this;}

    /**
     * <p>Source Server connector action credentials secret arn.</p>
     */
    inline SourceServerConnectorAction& WithCredentialsSecretArn(const char* value) { SetCredentialsSecretArn(value); return *this;}

  private:

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
