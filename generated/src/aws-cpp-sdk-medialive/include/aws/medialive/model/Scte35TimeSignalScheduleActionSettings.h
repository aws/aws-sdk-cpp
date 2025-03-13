/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/Scte35Descriptor.h>
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
   * Settings for a SCTE-35 time_signal.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35TimeSignalScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class Scte35TimeSignalScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API Scte35TimeSignalScheduleActionSettings() = default;
    AWS_MEDIALIVE_API Scte35TimeSignalScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte35TimeSignalScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The list of SCTE-35 descriptors accompanying the SCTE-35 time_signal.
     */
    inline const Aws::Vector<Scte35Descriptor>& GetScte35Descriptors() const { return m_scte35Descriptors; }
    inline bool Scte35DescriptorsHasBeenSet() const { return m_scte35DescriptorsHasBeenSet; }
    template<typename Scte35DescriptorsT = Aws::Vector<Scte35Descriptor>>
    void SetScte35Descriptors(Scte35DescriptorsT&& value) { m_scte35DescriptorsHasBeenSet = true; m_scte35Descriptors = std::forward<Scte35DescriptorsT>(value); }
    template<typename Scte35DescriptorsT = Aws::Vector<Scte35Descriptor>>
    Scte35TimeSignalScheduleActionSettings& WithScte35Descriptors(Scte35DescriptorsT&& value) { SetScte35Descriptors(std::forward<Scte35DescriptorsT>(value)); return *this;}
    template<typename Scte35DescriptorsT = Scte35Descriptor>
    Scte35TimeSignalScheduleActionSettings& AddScte35Descriptors(Scte35DescriptorsT&& value) { m_scte35DescriptorsHasBeenSet = true; m_scte35Descriptors.emplace_back(std::forward<Scte35DescriptorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Scte35Descriptor> m_scte35Descriptors;
    bool m_scte35DescriptorsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
