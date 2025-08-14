/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/OutputLocationRef.h>
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
   * Additional output destinations for a CMAF Ingest output group<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AdditionalDestinations">AWS
   * API Reference</a></p>
   */
  class AdditionalDestinations
  {
  public:
    AWS_MEDIALIVE_API AdditionalDestinations() = default;
    AWS_MEDIALIVE_API AdditionalDestinations(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AdditionalDestinations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The destination location
     */
    inline const OutputLocationRef& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = OutputLocationRef>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = OutputLocationRef>
    AdditionalDestinations& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}
  private:

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
