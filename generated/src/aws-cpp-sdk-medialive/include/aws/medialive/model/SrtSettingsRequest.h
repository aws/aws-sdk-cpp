/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/SrtCallerSourceRequest.h>
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
   * Configures the sources for this SRT input. For a single-pipeline input, include
   * one srtCallerSource in the array. For a standard-pipeline input, include two
   * srtCallerSource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SrtSettingsRequest">AWS
   * API Reference</a></p>
   */
  class SrtSettingsRequest
  {
  public:
    AWS_MEDIALIVE_API SrtSettingsRequest();
    AWS_MEDIALIVE_API SrtSettingsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SrtSettingsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<SrtCallerSourceRequest>& GetSrtCallerSources() const{ return m_srtCallerSources; }
    inline bool SrtCallerSourcesHasBeenSet() const { return m_srtCallerSourcesHasBeenSet; }
    inline void SetSrtCallerSources(const Aws::Vector<SrtCallerSourceRequest>& value) { m_srtCallerSourcesHasBeenSet = true; m_srtCallerSources = value; }
    inline void SetSrtCallerSources(Aws::Vector<SrtCallerSourceRequest>&& value) { m_srtCallerSourcesHasBeenSet = true; m_srtCallerSources = std::move(value); }
    inline SrtSettingsRequest& WithSrtCallerSources(const Aws::Vector<SrtCallerSourceRequest>& value) { SetSrtCallerSources(value); return *this;}
    inline SrtSettingsRequest& WithSrtCallerSources(Aws::Vector<SrtCallerSourceRequest>&& value) { SetSrtCallerSources(std::move(value)); return *this;}
    inline SrtSettingsRequest& AddSrtCallerSources(const SrtCallerSourceRequest& value) { m_srtCallerSourcesHasBeenSet = true; m_srtCallerSources.push_back(value); return *this; }
    inline SrtSettingsRequest& AddSrtCallerSources(SrtCallerSourceRequest&& value) { m_srtCallerSourcesHasBeenSet = true; m_srtCallerSources.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SrtCallerSourceRequest> m_srtCallerSources;
    bool m_srtCallerSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
