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
   * <p>The source of the static file that contains the image.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetImageStaticFileSource">AWS
   * API Reference</a></p>
   */
  class SheetImageStaticFileSource
  {
  public:
    AWS_QUICKSIGHT_API SheetImageStaticFileSource();
    AWS_QUICKSIGHT_API SheetImageStaticFileSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetImageStaticFileSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the static file that contains the image.</p>
     */
    inline const Aws::String& GetStaticFileId() const{ return m_staticFileId; }
    inline bool StaticFileIdHasBeenSet() const { return m_staticFileIdHasBeenSet; }
    inline void SetStaticFileId(const Aws::String& value) { m_staticFileIdHasBeenSet = true; m_staticFileId = value; }
    inline void SetStaticFileId(Aws::String&& value) { m_staticFileIdHasBeenSet = true; m_staticFileId = std::move(value); }
    inline void SetStaticFileId(const char* value) { m_staticFileIdHasBeenSet = true; m_staticFileId.assign(value); }
    inline SheetImageStaticFileSource& WithStaticFileId(const Aws::String& value) { SetStaticFileId(value); return *this;}
    inline SheetImageStaticFileSource& WithStaticFileId(Aws::String&& value) { SetStaticFileId(std::move(value)); return *this;}
    inline SheetImageStaticFileSource& WithStaticFileId(const char* value) { SetStaticFileId(value); return *this;}
    ///@}
  private:

    Aws::String m_staticFileId;
    bool m_staticFileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
