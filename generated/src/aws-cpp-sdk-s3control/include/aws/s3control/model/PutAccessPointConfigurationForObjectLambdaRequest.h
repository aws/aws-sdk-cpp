/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/ObjectLambdaConfiguration.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class PutAccessPointConfigurationForObjectLambdaRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API PutAccessPointConfigurationForObjectLambdaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccessPointConfigurationForObjectLambda"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline PutAccessPointConfigurationForObjectLambdaRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline PutAccessPointConfigurationForObjectLambdaRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline PutAccessPointConfigurationForObjectLambdaRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline PutAccessPointConfigurationForObjectLambdaRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline PutAccessPointConfigurationForObjectLambdaRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline PutAccessPointConfigurationForObjectLambdaRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Object Lambda Access Point configuration document.</p>
     */
    inline const ObjectLambdaConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Object Lambda Access Point configuration document.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Object Lambda Access Point configuration document.</p>
     */
    inline void SetConfiguration(const ObjectLambdaConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Object Lambda Access Point configuration document.</p>
     */
    inline void SetConfiguration(ObjectLambdaConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Object Lambda Access Point configuration document.</p>
     */
    inline PutAccessPointConfigurationForObjectLambdaRequest& WithConfiguration(const ObjectLambdaConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Object Lambda Access Point configuration document.</p>
     */
    inline PutAccessPointConfigurationForObjectLambdaRequest& WithConfiguration(ObjectLambdaConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ObjectLambdaConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
