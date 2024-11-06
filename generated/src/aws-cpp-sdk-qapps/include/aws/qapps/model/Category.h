/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>A category used to classify and filter library items for Amazon Q
   * Apps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/Category">AWS API
   * Reference</a></p>
   */
  class Category
  {
  public:
    AWS_QAPPS_API Category();
    AWS_QAPPS_API Category(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Category& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the category.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Category& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Category& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Category& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title or name of the category.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline Category& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline Category& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline Category& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color of the category</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }
    inline Category& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline Category& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline Category& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of published Amazon Q Apps associated with a category</p>
     */
    inline int GetAppCount() const{ return m_appCount; }
    inline bool AppCountHasBeenSet() const { return m_appCountHasBeenSet; }
    inline void SetAppCount(int value) { m_appCountHasBeenSet = true; m_appCount = value; }
    inline Category& WithAppCount(int value) { SetAppCount(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    int m_appCount;
    bool m_appCountHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
