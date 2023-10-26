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
   * <p> Provides details about Amazon EventBridge event bus. An event bus is a
   * router that receives events and delivers them to zero or more destinations, or
   * targets. This can be a custom event bus which you can use to receive events from
   * your custom applications and services, or it can be a partner event bus which
   * can be matched to a partner event source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEventsEventbusDetails">AWS
   * API Reference</a></p>
   */
  class AwsEventsEventbusDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEventsEventbusDetails();
    AWS_SECURITYHUB_API AwsEventsEventbusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEventbusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the account permitted to write events to
     * the current account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the account permitted to write events to
     * the current account.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the account permitted to write events to
     * the current account.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the account permitted to write events to
     * the current account.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the account permitted to write events to
     * the current account.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the account permitted to write events to
     * the current account.</p>
     */
    inline AwsEventsEventbusDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the account permitted to write events to
     * the current account.</p>
     */
    inline AwsEventsEventbusDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the account permitted to write events to
     * the current account.</p>
     */
    inline AwsEventsEventbusDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The name of the event bus.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the event bus.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the event bus.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the event bus.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the event bus.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the event bus.</p>
     */
    inline AwsEventsEventbusDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the event bus.</p>
     */
    inline AwsEventsEventbusDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the event bus.</p>
     */
    inline AwsEventsEventbusDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The policy that enables the external account to send events to your
     * account.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p> The policy that enables the external account to send events to your
     * account.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p> The policy that enables the external account to send events to your
     * account.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p> The policy that enables the external account to send events to your
     * account.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p> The policy that enables the external account to send events to your
     * account.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p> The policy that enables the external account to send events to your
     * account.</p>
     */
    inline AwsEventsEventbusDetails& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p> The policy that enables the external account to send events to your
     * account.</p>
     */
    inline AwsEventsEventbusDetails& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p> The policy that enables the external account to send events to your
     * account.</p>
     */
    inline AwsEventsEventbusDetails& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
