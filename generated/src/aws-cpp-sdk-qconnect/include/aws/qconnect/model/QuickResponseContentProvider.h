/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The container quick response content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/QuickResponseContentProvider">AWS
   * API Reference</a></p>
   */
  class QuickResponseContentProvider
  {
  public:
    AWS_QCONNECT_API QuickResponseContentProvider();
    AWS_QCONNECT_API QuickResponseContentProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API QuickResponseContentProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content of the quick response.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the quick response.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the quick response.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the quick response.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the quick response.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the quick response.</p>
     */
    inline QuickResponseContentProvider& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the quick response.</p>
     */
    inline QuickResponseContentProvider& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the quick response.</p>
     */
    inline QuickResponseContentProvider& WithContent(const char* value) { SetContent(value); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
