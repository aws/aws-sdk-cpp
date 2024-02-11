/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
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
namespace SSOOIDC
{
namespace Model
{

  /**
   * <p>Indicates that a token provided as input to the request was issued by and is
   * only usable by calling IAM Identity Center endpoints in another
   * region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/InvalidRequestRegionException">AWS
   * API Reference</a></p>
   */
  class InvalidRequestRegionException
  {
  public:
    AWS_SSOOIDC_API InvalidRequestRegionException();
    AWS_SSOOIDC_API InvalidRequestRegionException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API InvalidRequestRegionException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Single error code. For this exception the value will be
     * <code>invalid_request</code>.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>invalid_request</code>.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>invalid_request</code>.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>invalid_request</code>.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>invalid_request</code>.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>invalid_request</code>.</p>
     */
    inline InvalidRequestRegionException& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>Single error code. For this exception the value will be
     * <code>invalid_request</code>.</p>
     */
    inline InvalidRequestRegionException& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>Single error code. For this exception the value will be
     * <code>invalid_request</code>.</p>
     */
    inline InvalidRequestRegionException& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline const Aws::String& GetError_description() const{ return m_error_description; }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline bool Error_descriptionHasBeenSet() const { return m_error_descriptionHasBeenSet; }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline void SetError_description(const Aws::String& value) { m_error_descriptionHasBeenSet = true; m_error_description = value; }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline void SetError_description(Aws::String&& value) { m_error_descriptionHasBeenSet = true; m_error_description = std::move(value); }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline void SetError_description(const char* value) { m_error_descriptionHasBeenSet = true; m_error_description.assign(value); }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline InvalidRequestRegionException& WithError_description(const Aws::String& value) { SetError_description(value); return *this;}

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline InvalidRequestRegionException& WithError_description(Aws::String&& value) { SetError_description(std::move(value)); return *this;}

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline InvalidRequestRegionException& WithError_description(const char* value) { SetError_description(value); return *this;}


    /**
     * <p>Indicates the IAM Identity Center endpoint which the requester may call with
     * this token.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>Indicates the IAM Identity Center endpoint which the requester may call with
     * this token.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>Indicates the IAM Identity Center endpoint which the requester may call with
     * this token.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>Indicates the IAM Identity Center endpoint which the requester may call with
     * this token.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>Indicates the IAM Identity Center endpoint which the requester may call with
     * this token.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>Indicates the IAM Identity Center endpoint which the requester may call with
     * this token.</p>
     */
    inline InvalidRequestRegionException& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>Indicates the IAM Identity Center endpoint which the requester may call with
     * this token.</p>
     */
    inline InvalidRequestRegionException& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>Indicates the IAM Identity Center endpoint which the requester may call with
     * this token.</p>
     */
    inline InvalidRequestRegionException& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>Indicates the region which the requester may call with this token.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>Indicates the region which the requester may call with this token.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>Indicates the region which the requester may call with this token.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>Indicates the region which the requester may call with this token.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>Indicates the region which the requester may call with this token.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>Indicates the region which the requester may call with this token.</p>
     */
    inline InvalidRequestRegionException& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>Indicates the region which the requester may call with this token.</p>
     */
    inline InvalidRequestRegionException& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>Indicates the region which the requester may call with this token.</p>
     */
    inline InvalidRequestRegionException& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_error_description;
    bool m_error_descriptionHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
