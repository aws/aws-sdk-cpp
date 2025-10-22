/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/LinkApplicationLogSampling.h>
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
namespace RTBFabric
{
namespace Model
{

  /**
   * <p>Describes the configuration of a link application log.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/LinkApplicationLogConfiguration">AWS
   * API Reference</a></p>
   */
  class LinkApplicationLogConfiguration
  {
  public:
    AWS_RTBFABRIC_API LinkApplicationLogConfiguration() = default;
    AWS_RTBFABRIC_API LinkApplicationLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API LinkApplicationLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes a link application log sample.</p>
     */
    inline const LinkApplicationLogSampling& GetSampling() const { return m_sampling; }
    inline bool SamplingHasBeenSet() const { return m_samplingHasBeenSet; }
    template<typename SamplingT = LinkApplicationLogSampling>
    void SetSampling(SamplingT&& value) { m_samplingHasBeenSet = true; m_sampling = std::forward<SamplingT>(value); }
    template<typename SamplingT = LinkApplicationLogSampling>
    LinkApplicationLogConfiguration& WithSampling(SamplingT&& value) { SetSampling(std::forward<SamplingT>(value)); return *this;}
    ///@}
  private:

    LinkApplicationLogSampling m_sampling;
    bool m_samplingHasBeenSet = false;
  };

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
