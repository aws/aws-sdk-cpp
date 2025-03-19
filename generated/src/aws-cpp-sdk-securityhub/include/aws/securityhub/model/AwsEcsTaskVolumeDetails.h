/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEcsTaskVolumeHostDetails.h>
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
   * <p>Provides information about a data volume that's used in a task definition.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskVolumeDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskVolumeDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskVolumeDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskVolumeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskVolumeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsEcsTaskVolumeDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. </p>
     */
    inline const AwsEcsTaskVolumeHostDetails& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = AwsEcsTaskVolumeHostDetails>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = AwsEcsTaskVolumeHostDetails>
    AwsEcsTaskVolumeDetails& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AwsEcsTaskVolumeHostDetails m_host;
    bool m_hostHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
