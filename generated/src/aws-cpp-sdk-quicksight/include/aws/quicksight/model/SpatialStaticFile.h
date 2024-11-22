/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/StaticFileSource.h>
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
   * <p>A static file that contains the geospatial data.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SpatialStaticFile">AWS
   * API Reference</a></p>
   */
  class SpatialStaticFile
  {
  public:
    AWS_QUICKSIGHT_API SpatialStaticFile();
    AWS_QUICKSIGHT_API SpatialStaticFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SpatialStaticFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the spatial static file.</p>
     */
    inline const Aws::String& GetStaticFileId() const{ return m_staticFileId; }
    inline bool StaticFileIdHasBeenSet() const { return m_staticFileIdHasBeenSet; }
    inline void SetStaticFileId(const Aws::String& value) { m_staticFileIdHasBeenSet = true; m_staticFileId = value; }
    inline void SetStaticFileId(Aws::String&& value) { m_staticFileIdHasBeenSet = true; m_staticFileId = std::move(value); }
    inline void SetStaticFileId(const char* value) { m_staticFileIdHasBeenSet = true; m_staticFileId.assign(value); }
    inline SpatialStaticFile& WithStaticFileId(const Aws::String& value) { SetStaticFileId(value); return *this;}
    inline SpatialStaticFile& WithStaticFileId(Aws::String&& value) { SetStaticFileId(std::move(value)); return *this;}
    inline SpatialStaticFile& WithStaticFileId(const char* value) { SetStaticFileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the spatial static file.</p>
     */
    inline const StaticFileSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const StaticFileSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(StaticFileSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline SpatialStaticFile& WithSource(const StaticFileSource& value) { SetSource(value); return *this;}
    inline SpatialStaticFile& WithSource(StaticFileSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_staticFileId;
    bool m_staticFileIdHasBeenSet = false;

    StaticFileSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
