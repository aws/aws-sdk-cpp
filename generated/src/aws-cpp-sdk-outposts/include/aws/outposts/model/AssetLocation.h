/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>

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
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about the position of the asset in a rack. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/AssetLocation">AWS
   * API Reference</a></p>
   */
  class AssetLocation
  {
  public:
    AWS_OUTPOSTS_API AssetLocation();
    AWS_OUTPOSTS_API AssetLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API AssetLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The position of an asset in a rack measured in rack units. </p>
     */
    inline double GetRackElevation() const{ return m_rackElevation; }

    /**
     * <p> The position of an asset in a rack measured in rack units. </p>
     */
    inline bool RackElevationHasBeenSet() const { return m_rackElevationHasBeenSet; }

    /**
     * <p> The position of an asset in a rack measured in rack units. </p>
     */
    inline void SetRackElevation(double value) { m_rackElevationHasBeenSet = true; m_rackElevation = value; }

    /**
     * <p> The position of an asset in a rack measured in rack units. </p>
     */
    inline AssetLocation& WithRackElevation(double value) { SetRackElevation(value); return *this;}

  private:

    double m_rackElevation;
    bool m_rackElevationHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
