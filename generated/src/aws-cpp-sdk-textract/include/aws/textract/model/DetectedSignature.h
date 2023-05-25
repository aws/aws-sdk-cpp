/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>

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
namespace Textract
{
namespace Model
{

  /**
   * <p>A structure that holds information regarding a detected signature on a
   * page.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/DetectedSignature">AWS
   * API Reference</a></p>
   */
  class DetectedSignature
  {
  public:
    AWS_TEXTRACT_API DetectedSignature();
    AWS_TEXTRACT_API DetectedSignature(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API DetectedSignature& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The page a detected signature was found on.</p>
     */
    inline int GetPage() const{ return m_page; }

    /**
     * <p>The page a detected signature was found on.</p>
     */
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }

    /**
     * <p>The page a detected signature was found on.</p>
     */
    inline void SetPage(int value) { m_pageHasBeenSet = true; m_page = value; }

    /**
     * <p>The page a detected signature was found on.</p>
     */
    inline DetectedSignature& WithPage(int value) { SetPage(value); return *this;}

  private:

    int m_page;
    bool m_pageHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
