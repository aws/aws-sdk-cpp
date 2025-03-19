/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/NielsenPcmToId3TaggingState.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Nielsen Configuration<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/NielsenConfiguration">AWS
   * API Reference</a></p>
   */
  class NielsenConfiguration
  {
  public:
    AWS_MEDIALIVE_API NielsenConfiguration() = default;
    AWS_MEDIALIVE_API NielsenConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API NielsenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Enter the Distributor ID assigned to your organization by Nielsen.
     */
    inline const Aws::String& GetDistributorId() const { return m_distributorId; }
    inline bool DistributorIdHasBeenSet() const { return m_distributorIdHasBeenSet; }
    template<typename DistributorIdT = Aws::String>
    void SetDistributorId(DistributorIdT&& value) { m_distributorIdHasBeenSet = true; m_distributorId = std::forward<DistributorIdT>(value); }
    template<typename DistributorIdT = Aws::String>
    NielsenConfiguration& WithDistributorId(DistributorIdT&& value) { SetDistributorId(std::forward<DistributorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enables Nielsen PCM to ID3 tagging
     */
    inline NielsenPcmToId3TaggingState GetNielsenPcmToId3Tagging() const { return m_nielsenPcmToId3Tagging; }
    inline bool NielsenPcmToId3TaggingHasBeenSet() const { return m_nielsenPcmToId3TaggingHasBeenSet; }
    inline void SetNielsenPcmToId3Tagging(NielsenPcmToId3TaggingState value) { m_nielsenPcmToId3TaggingHasBeenSet = true; m_nielsenPcmToId3Tagging = value; }
    inline NielsenConfiguration& WithNielsenPcmToId3Tagging(NielsenPcmToId3TaggingState value) { SetNielsenPcmToId3Tagging(value); return *this;}
    ///@}
  private:

    Aws::String m_distributorId;
    bool m_distributorIdHasBeenSet = false;

    NielsenPcmToId3TaggingState m_nielsenPcmToId3Tagging{NielsenPcmToId3TaggingState::NOT_SET};
    bool m_nielsenPcmToId3TaggingHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
