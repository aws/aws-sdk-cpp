/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/Smpte2110ReceiverGroup.h>
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
   * Configures the sources for the SMPTE 2110 Receiver Group input.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Smpte2110ReceiverGroupSettings">AWS
   * API Reference</a></p>
   */
  class Smpte2110ReceiverGroupSettings
  {
  public:
    AWS_MEDIALIVE_API Smpte2110ReceiverGroupSettings() = default;
    AWS_MEDIALIVE_API Smpte2110ReceiverGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Smpte2110ReceiverGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<Smpte2110ReceiverGroup>& GetSmpte2110ReceiverGroups() const { return m_smpte2110ReceiverGroups; }
    inline bool Smpte2110ReceiverGroupsHasBeenSet() const { return m_smpte2110ReceiverGroupsHasBeenSet; }
    template<typename Smpte2110ReceiverGroupsT = Aws::Vector<Smpte2110ReceiverGroup>>
    void SetSmpte2110ReceiverGroups(Smpte2110ReceiverGroupsT&& value) { m_smpte2110ReceiverGroupsHasBeenSet = true; m_smpte2110ReceiverGroups = std::forward<Smpte2110ReceiverGroupsT>(value); }
    template<typename Smpte2110ReceiverGroupsT = Aws::Vector<Smpte2110ReceiverGroup>>
    Smpte2110ReceiverGroupSettings& WithSmpte2110ReceiverGroups(Smpte2110ReceiverGroupsT&& value) { SetSmpte2110ReceiverGroups(std::forward<Smpte2110ReceiverGroupsT>(value)); return *this;}
    template<typename Smpte2110ReceiverGroupsT = Smpte2110ReceiverGroup>
    Smpte2110ReceiverGroupSettings& AddSmpte2110ReceiverGroups(Smpte2110ReceiverGroupsT&& value) { m_smpte2110ReceiverGroupsHasBeenSet = true; m_smpte2110ReceiverGroups.emplace_back(std::forward<Smpte2110ReceiverGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Smpte2110ReceiverGroup> m_smpte2110ReceiverGroups;
    bool m_smpte2110ReceiverGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
