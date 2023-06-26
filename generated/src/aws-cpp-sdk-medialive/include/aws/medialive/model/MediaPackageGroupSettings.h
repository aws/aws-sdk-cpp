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
   * Media Package Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageGroupSettings">AWS
   * API Reference</a></p>
   */
  class MediaPackageGroupSettings
  {
  public:
    AWS_MEDIALIVE_API MediaPackageGroupSettings();
    AWS_MEDIALIVE_API MediaPackageGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MediaPackageGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * MediaPackage channel destination.
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }

    /**
     * MediaPackage channel destination.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * MediaPackage channel destination.
     */
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * MediaPackage channel destination.
     */
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * MediaPackage channel destination.
     */
    inline MediaPackageGroupSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}

    /**
     * MediaPackage channel destination.
     */
    inline MediaPackageGroupSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}

  private:

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
