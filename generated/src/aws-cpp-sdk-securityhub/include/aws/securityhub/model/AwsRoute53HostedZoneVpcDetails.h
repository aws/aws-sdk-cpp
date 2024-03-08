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
   * <p> For private hosted zones, this is a complex type that contains information
   * about an Amazon VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRoute53HostedZoneVpcDetails">AWS
   * API Reference</a></p>
   */
  class AwsRoute53HostedZoneVpcDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRoute53HostedZoneVpcDetails();
    AWS_SECURITYHUB_API AwsRoute53HostedZoneVpcDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRoute53HostedZoneVpcDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The identifier of an Amazon VPC. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The identifier of an Amazon VPC. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The identifier of an Amazon VPC. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The identifier of an Amazon VPC. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The identifier of an Amazon VPC. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The identifier of an Amazon VPC. </p>
     */
    inline AwsRoute53HostedZoneVpcDetails& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The identifier of an Amazon VPC. </p>
     */
    inline AwsRoute53HostedZoneVpcDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The identifier of an Amazon VPC. </p>
     */
    inline AwsRoute53HostedZoneVpcDetails& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The Amazon Web Services Region that an Amazon VPC was created in.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p> The Amazon Web Services Region that an Amazon VPC was created in.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p> The Amazon Web Services Region that an Amazon VPC was created in.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p> The Amazon Web Services Region that an Amazon VPC was created in.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p> The Amazon Web Services Region that an Amazon VPC was created in.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p> The Amazon Web Services Region that an Amazon VPC was created in.</p>
     */
    inline AwsRoute53HostedZoneVpcDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p> The Amazon Web Services Region that an Amazon VPC was created in.</p>
     */
    inline AwsRoute53HostedZoneVpcDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services Region that an Amazon VPC was created in.</p>
     */
    inline AwsRoute53HostedZoneVpcDetails& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
