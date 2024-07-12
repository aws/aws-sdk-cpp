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
   * <p>The definition for a <code>VisualOptions</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualOptions">AWS
   * API Reference</a></p>
   */
  class VisualOptions
  {
  public:
    AWS_QUICKSIGHT_API VisualOptions();
    AWS_QUICKSIGHT_API VisualOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type for a <code>VisualOptions</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline VisualOptions& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline VisualOptions& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline VisualOptions& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
