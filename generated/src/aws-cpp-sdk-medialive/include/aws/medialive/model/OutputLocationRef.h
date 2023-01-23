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
    AWS_MEDIALIVE_API OutputLocationRef();
    AWS_MEDIALIVE_API OutputLocationRef(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API OutputLocationRef& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDestinationRefId() const{ return m_destinationRefId; }

    
    inline bool DestinationRefIdHasBeenSet() const { return m_destinationRefIdHasBeenSet; }

    
    inline void SetDestinationRefId(const Aws::String& value) { m_destinationRefIdHasBeenSet = true; m_destinationRefId = value; }

    
    inline void SetDestinationRefId(Aws::String&& value) { m_destinationRefIdHasBeenSet = true; m_destinationRefId = std::move(value); }

    
    inline void SetDestinationRefId(const char* value) { m_destinationRefIdHasBeenSet = true; m_destinationRefId.assign(value); }

    
    inline OutputLocationRef& WithDestinationRefId(const Aws::String& value) { SetDestinationRefId(value); return *this;}

    
    inline OutputLocationRef& WithDestinationRefId(Aws::String&& value) { SetDestinationRefId(std::move(value)); return *this;}

    
    inline OutputLocationRef& WithDestinationRefId(const char* value) { SetDestinationRefId(value); return *this;}

  private:

    Aws::String m_destinationRefId;
    bool m_destinationRefIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
