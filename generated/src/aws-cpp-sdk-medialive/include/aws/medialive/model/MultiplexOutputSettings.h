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
   * Multiplex Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexOutputSettings">AWS
   * API Reference</a></p>
   */
  class MultiplexOutputSettings
  {
  public:
    AWS_MEDIALIVE_API MultiplexOutputSettings();
    AWS_MEDIALIVE_API MultiplexOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Destination is a Multiplex.
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }

    /**
     * Destination is a Multiplex.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * Destination is a Multiplex.
     */
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * Destination is a Multiplex.
     */
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * Destination is a Multiplex.
     */
    inline MultiplexOutputSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}

    /**
     * Destination is a Multiplex.
     */
    inline MultiplexOutputSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}

  private:

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
