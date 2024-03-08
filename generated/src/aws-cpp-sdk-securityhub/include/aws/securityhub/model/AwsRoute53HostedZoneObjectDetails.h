/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsRoute53HostedZoneConfigDetails.h>
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
   * <p> An object that contains information about an Amazon Route 53 hosted zone.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRoute53HostedZoneObjectDetails">AWS
   * API Reference</a></p>
   */
  class AwsRoute53HostedZoneObjectDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRoute53HostedZoneObjectDetails();
    AWS_SECURITYHUB_API AwsRoute53HostedZoneObjectDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRoute53HostedZoneObjectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID that Route 53 assigns to the hosted zone when you create it. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The ID that Route 53 assigns to the hosted zone when you create it. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The ID that Route 53 assigns to the hosted zone when you create it. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The ID that Route 53 assigns to the hosted zone when you create it. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The ID that Route 53 assigns to the hosted zone when you create it. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The ID that Route 53 assigns to the hosted zone when you create it. </p>
     */
    inline AwsRoute53HostedZoneObjectDetails& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The ID that Route 53 assigns to the hosted zone when you create it. </p>
     */
    inline AwsRoute53HostedZoneObjectDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The ID that Route 53 assigns to the hosted zone when you create it. </p>
     */
    inline AwsRoute53HostedZoneObjectDetails& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p>
     */
    inline AwsRoute53HostedZoneObjectDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p>
     */
    inline AwsRoute53HostedZoneObjectDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p>
     */
    inline AwsRoute53HostedZoneObjectDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> An object that includes the <code>Comment</code> element.</p>
     */
    inline const AwsRoute53HostedZoneConfigDetails& GetConfig() const{ return m_config; }

    /**
     * <p> An object that includes the <code>Comment</code> element.</p>
     */
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }

    /**
     * <p> An object that includes the <code>Comment</code> element.</p>
     */
    inline void SetConfig(const AwsRoute53HostedZoneConfigDetails& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p> An object that includes the <code>Comment</code> element.</p>
     */
    inline void SetConfig(AwsRoute53HostedZoneConfigDetails&& value) { m_configHasBeenSet = true; m_config = std::move(value); }

    /**
     * <p> An object that includes the <code>Comment</code> element.</p>
     */
    inline AwsRoute53HostedZoneObjectDetails& WithConfig(const AwsRoute53HostedZoneConfigDetails& value) { SetConfig(value); return *this;}

    /**
     * <p> An object that includes the <code>Comment</code> element.</p>
     */
    inline AwsRoute53HostedZoneObjectDetails& WithConfig(AwsRoute53HostedZoneConfigDetails&& value) { SetConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AwsRoute53HostedZoneConfigDetails m_config;
    bool m_configHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
