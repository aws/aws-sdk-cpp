/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about the status of the VPC peering connection. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpcPeeringConnectionStatusDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpcPeeringConnectionStatusDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionStatusDetails();
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline AwsEc2VpcPeeringConnectionStatusDetails& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline AwsEc2VpcPeeringConnectionStatusDetails& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline AwsEc2VpcPeeringConnectionStatusDetails& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A message that provides more information about the status, if applicable.
     * </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that provides more information about the status, if applicable.
     * </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message that provides more information about the status, if applicable.
     * </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that provides more information about the status, if applicable.
     * </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message that provides more information about the status, if applicable.
     * </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message that provides more information about the status, if applicable.
     * </p>
     */
    inline AwsEc2VpcPeeringConnectionStatusDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that provides more information about the status, if applicable.
     * </p>
     */
    inline AwsEc2VpcPeeringConnectionStatusDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message that provides more information about the status, if applicable.
     * </p>
     */
    inline AwsEc2VpcPeeringConnectionStatusDetails& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
