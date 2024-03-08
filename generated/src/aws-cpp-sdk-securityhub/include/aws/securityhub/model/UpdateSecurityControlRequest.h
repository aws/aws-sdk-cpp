/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/ParameterConfiguration.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateSecurityControlRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateSecurityControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityControl"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p> The Amazon Resource Name (ARN) or ID of the control to update. </p>
     */
    inline const Aws::String& GetSecurityControlId() const{ return m_securityControlId; }

    /**
     * <p> The Amazon Resource Name (ARN) or ID of the control to update. </p>
     */
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) or ID of the control to update. </p>
     */
    inline void SetSecurityControlId(const Aws::String& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = value; }

    /**
     * <p> The Amazon Resource Name (ARN) or ID of the control to update. </p>
     */
    inline void SetSecurityControlId(Aws::String&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) or ID of the control to update. </p>
     */
    inline void SetSecurityControlId(const char* value) { m_securityControlIdHasBeenSet = true; m_securityControlId.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) or ID of the control to update. </p>
     */
    inline UpdateSecurityControlRequest& WithSecurityControlId(const Aws::String& value) { SetSecurityControlId(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) or ID of the control to update. </p>
     */
    inline UpdateSecurityControlRequest& WithSecurityControlId(Aws::String&& value) { SetSecurityControlId(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) or ID of the control to update. </p>
     */
    inline UpdateSecurityControlRequest& WithSecurityControlId(const char* value) { SetSecurityControlId(value); return *this;}


    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline const Aws::Map<Aws::String, ParameterConfiguration>& GetParameters() const{ return m_parameters; }

    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, ParameterConfiguration>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline void SetParameters(Aws::Map<Aws::String, ParameterConfiguration>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline UpdateSecurityControlRequest& WithParameters(const Aws::Map<Aws::String, ParameterConfiguration>& value) { SetParameters(value); return *this;}

    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline UpdateSecurityControlRequest& WithParameters(Aws::Map<Aws::String, ParameterConfiguration>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline UpdateSecurityControlRequest& AddParameters(const Aws::String& key, const ParameterConfiguration& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline UpdateSecurityControlRequest& AddParameters(Aws::String&& key, const ParameterConfiguration& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline UpdateSecurityControlRequest& AddParameters(const Aws::String& key, ParameterConfiguration&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline UpdateSecurityControlRequest& AddParameters(Aws::String&& key, ParameterConfiguration&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline UpdateSecurityControlRequest& AddParameters(const char* key, ParameterConfiguration&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p> An object that specifies which security control parameters to update. </p>
     */
    inline UpdateSecurityControlRequest& AddParameters(const char* key, const ParameterConfiguration& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p> The most recent reason for updating the properties of the security control.
     * This field accepts alphanumeric characters in addition to white spaces, dashes,
     * and underscores. </p>
     */
    inline const Aws::String& GetLastUpdateReason() const{ return m_lastUpdateReason; }

    /**
     * <p> The most recent reason for updating the properties of the security control.
     * This field accepts alphanumeric characters in addition to white spaces, dashes,
     * and underscores. </p>
     */
    inline bool LastUpdateReasonHasBeenSet() const { return m_lastUpdateReasonHasBeenSet; }

    /**
     * <p> The most recent reason for updating the properties of the security control.
     * This field accepts alphanumeric characters in addition to white spaces, dashes,
     * and underscores. </p>
     */
    inline void SetLastUpdateReason(const Aws::String& value) { m_lastUpdateReasonHasBeenSet = true; m_lastUpdateReason = value; }

    /**
     * <p> The most recent reason for updating the properties of the security control.
     * This field accepts alphanumeric characters in addition to white spaces, dashes,
     * and underscores. </p>
     */
    inline void SetLastUpdateReason(Aws::String&& value) { m_lastUpdateReasonHasBeenSet = true; m_lastUpdateReason = std::move(value); }

    /**
     * <p> The most recent reason for updating the properties of the security control.
     * This field accepts alphanumeric characters in addition to white spaces, dashes,
     * and underscores. </p>
     */
    inline void SetLastUpdateReason(const char* value) { m_lastUpdateReasonHasBeenSet = true; m_lastUpdateReason.assign(value); }

    /**
     * <p> The most recent reason for updating the properties of the security control.
     * This field accepts alphanumeric characters in addition to white spaces, dashes,
     * and underscores. </p>
     */
    inline UpdateSecurityControlRequest& WithLastUpdateReason(const Aws::String& value) { SetLastUpdateReason(value); return *this;}

    /**
     * <p> The most recent reason for updating the properties of the security control.
     * This field accepts alphanumeric characters in addition to white spaces, dashes,
     * and underscores. </p>
     */
    inline UpdateSecurityControlRequest& WithLastUpdateReason(Aws::String&& value) { SetLastUpdateReason(std::move(value)); return *this;}

    /**
     * <p> The most recent reason for updating the properties of the security control.
     * This field accepts alphanumeric characters in addition to white spaces, dashes,
     * and underscores. </p>
     */
    inline UpdateSecurityControlRequest& WithLastUpdateReason(const char* value) { SetLastUpdateReason(value); return *this;}

  private:

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    Aws::Map<Aws::String, ParameterConfiguration> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_lastUpdateReason;
    bool m_lastUpdateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
