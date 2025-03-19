/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/SrtCallerSource.h>
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
   * The configured sources for this SRT input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SrtSettings">AWS
   * API Reference</a></p>
   */
  class SrtSettings
  {
  public:
    AWS_MEDIALIVE_API SrtSettings() = default;
    AWS_MEDIALIVE_API SrtSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SrtSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<SrtCallerSource>& GetSrtCallerSources() const { return m_srtCallerSources; }
    inline bool SrtCallerSourcesHasBeenSet() const { return m_srtCallerSourcesHasBeenSet; }
    template<typename SrtCallerSourcesT = Aws::Vector<SrtCallerSource>>
    void SetSrtCallerSources(SrtCallerSourcesT&& value) { m_srtCallerSourcesHasBeenSet = true; m_srtCallerSources = std::forward<SrtCallerSourcesT>(value); }
    template<typename SrtCallerSourcesT = Aws::Vector<SrtCallerSource>>
    SrtSettings& WithSrtCallerSources(SrtCallerSourcesT&& value) { SetSrtCallerSources(std::forward<SrtCallerSourcesT>(value)); return *this;}
    template<typename SrtCallerSourcesT = SrtCallerSource>
    SrtSettings& AddSrtCallerSources(SrtCallerSourcesT&& value) { m_srtCallerSourcesHasBeenSet = true; m_srtCallerSources.emplace_back(std::forward<SrtCallerSourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SrtCallerSource> m_srtCallerSources;
    bool m_srtCallerSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
