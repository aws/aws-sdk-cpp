/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/MulticastSourceUpdateRequest.h>
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
   * Settings for a Multicast input. Contains a list of multicast Urls and optional
   * source ip addresses.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MulticastSettingsUpdateRequest">AWS
   * API Reference</a></p>
   */
  class MulticastSettingsUpdateRequest
  {
  public:
    AWS_MEDIALIVE_API MulticastSettingsUpdateRequest();
    AWS_MEDIALIVE_API MulticastSettingsUpdateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MulticastSettingsUpdateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<MulticastSourceUpdateRequest>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<MulticastSourceUpdateRequest>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<MulticastSourceUpdateRequest>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline MulticastSettingsUpdateRequest& WithSources(const Aws::Vector<MulticastSourceUpdateRequest>& value) { SetSources(value); return *this;}
    inline MulticastSettingsUpdateRequest& WithSources(Aws::Vector<MulticastSourceUpdateRequest>&& value) { SetSources(std::move(value)); return *this;}
    inline MulticastSettingsUpdateRequest& AddSources(const MulticastSourceUpdateRequest& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline MulticastSettingsUpdateRequest& AddSources(MulticastSourceUpdateRequest&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MulticastSourceUpdateRequest> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
