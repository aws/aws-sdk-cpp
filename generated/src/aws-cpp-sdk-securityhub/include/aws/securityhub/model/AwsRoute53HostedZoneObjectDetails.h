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
    AWS_SECURITYHUB_API AwsRoute53HostedZoneObjectDetails() = default;
    AWS_SECURITYHUB_API AwsRoute53HostedZoneObjectDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRoute53HostedZoneObjectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID that Route 53 assigns to the hosted zone when you create it. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AwsRoute53HostedZoneObjectDetails& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsRoute53HostedZoneObjectDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that includes the <code>Comment</code> element.</p>
     */
    inline const AwsRoute53HostedZoneConfigDetails& GetConfig() const { return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    template<typename ConfigT = AwsRoute53HostedZoneConfigDetails>
    void SetConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config = std::forward<ConfigT>(value); }
    template<typename ConfigT = AwsRoute53HostedZoneConfigDetails>
    AwsRoute53HostedZoneObjectDetails& WithConfig(ConfigT&& value) { SetConfig(std::forward<ConfigT>(value)); return *this;}
    ///@}
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
