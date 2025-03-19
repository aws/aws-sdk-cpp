/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Reference to an OutputDestination ID defined in the channel<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputLocationRef">AWS
   * API Reference</a></p>
   */
  class OutputLocationRef
  {
  public:
    AWS_MEDIALIVE_API OutputLocationRef() = default;
    AWS_MEDIALIVE_API OutputLocationRef(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API OutputLocationRef& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDestinationRefId() const { return m_destinationRefId; }
    inline bool DestinationRefIdHasBeenSet() const { return m_destinationRefIdHasBeenSet; }
    template<typename DestinationRefIdT = Aws::String>
    void SetDestinationRefId(DestinationRefIdT&& value) { m_destinationRefIdHasBeenSet = true; m_destinationRefId = std::forward<DestinationRefIdT>(value); }
    template<typename DestinationRefIdT = Aws::String>
    OutputLocationRef& WithDestinationRefId(DestinationRefIdT&& value) { SetDestinationRefId(std::forward<DestinationRefIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationRefId;
    bool m_destinationRefIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
