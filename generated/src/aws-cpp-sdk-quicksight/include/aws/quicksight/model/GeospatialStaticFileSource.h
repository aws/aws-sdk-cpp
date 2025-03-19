/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The source properties for a geospatial static file.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialStaticFileSource">AWS
   * API Reference</a></p>
   */
  class GeospatialStaticFileSource
  {
  public:
    AWS_QUICKSIGHT_API GeospatialStaticFileSource() = default;
    AWS_QUICKSIGHT_API GeospatialStaticFileSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialStaticFileSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the static file.</p>
     */
    inline const Aws::String& GetStaticFileId() const { return m_staticFileId; }
    inline bool StaticFileIdHasBeenSet() const { return m_staticFileIdHasBeenSet; }
    template<typename StaticFileIdT = Aws::String>
    void SetStaticFileId(StaticFileIdT&& value) { m_staticFileIdHasBeenSet = true; m_staticFileId = std::forward<StaticFileIdT>(value); }
    template<typename StaticFileIdT = Aws::String>
    GeospatialStaticFileSource& WithStaticFileId(StaticFileIdT&& value) { SetStaticFileId(std::forward<StaticFileIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_staticFileId;
    bool m_staticFileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
