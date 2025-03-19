/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Contains a key range. For export jobs, a <code>S3Resource</code> object can
   * have an optional <code>KeyRange</code> value. The length of the range is defined
   * at job creation, and has either an inclusive <code>BeginMarker</code>, an
   * inclusive <code>EndMarker</code>, or both. Ranges are UTF-8 binary
   * sorted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/KeyRange">AWS
   * API Reference</a></p>
   */
  class KeyRange
  {
  public:
    AWS_SNOWBALL_API KeyRange() = default;
    AWS_SNOWBALL_API KeyRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API KeyRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key that starts an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline const Aws::String& GetBeginMarker() const { return m_beginMarker; }
    inline bool BeginMarkerHasBeenSet() const { return m_beginMarkerHasBeenSet; }
    template<typename BeginMarkerT = Aws::String>
    void SetBeginMarker(BeginMarkerT&& value) { m_beginMarkerHasBeenSet = true; m_beginMarker = std::forward<BeginMarkerT>(value); }
    template<typename BeginMarkerT = Aws::String>
    KeyRange& WithBeginMarker(BeginMarkerT&& value) { SetBeginMarker(std::forward<BeginMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key that ends an optional key range for an export job. Ranges are
     * inclusive and UTF-8 binary sorted.</p>
     */
    inline const Aws::String& GetEndMarker() const { return m_endMarker; }
    inline bool EndMarkerHasBeenSet() const { return m_endMarkerHasBeenSet; }
    template<typename EndMarkerT = Aws::String>
    void SetEndMarker(EndMarkerT&& value) { m_endMarkerHasBeenSet = true; m_endMarker = std::forward<EndMarkerT>(value); }
    template<typename EndMarkerT = Aws::String>
    KeyRange& WithEndMarker(EndMarkerT&& value) { SetEndMarker(std::forward<EndMarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_beginMarker;
    bool m_beginMarkerHasBeenSet = false;

    Aws::String m_endMarker;
    bool m_endMarkerHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
