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
   * <p>A static file that contains an image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ImageStaticFile">AWS
   * API Reference</a></p>
   */
  class ImageStaticFile
  {
  public:
    AWS_QUICKSIGHT_API ImageStaticFile() = default;
    AWS_QUICKSIGHT_API ImageStaticFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ImageStaticFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the static file that contains an image.</p>
     */
    inline const Aws::String& GetStaticFileId() const { return m_staticFileId; }
    inline bool StaticFileIdHasBeenSet() const { return m_staticFileIdHasBeenSet; }
    template<typename StaticFileIdT = Aws::String>
    void SetStaticFileId(StaticFileIdT&& value) { m_staticFileIdHasBeenSet = true; m_staticFileId = std::forward<StaticFileIdT>(value); }
    template<typename StaticFileIdT = Aws::String>
    ImageStaticFile& WithStaticFileId(StaticFileIdT&& value) { SetStaticFileId(std::forward<StaticFileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the image static file.</p>
     */
    inline const StaticFileSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = StaticFileSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = StaticFileSource>
    ImageStaticFile& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
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
