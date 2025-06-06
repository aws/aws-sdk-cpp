/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Object specifying the acceptable range of challenge versions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Versions">AWS
   * API Reference</a></p>
   */
  class Versions
  {
  public:
    AWS_REKOGNITION_API Versions() = default;
    AWS_REKOGNITION_API Versions(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Versions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The desired minimum version for the challenge.</p>
     */
    inline const Aws::String& GetMinimum() const { return m_minimum; }
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
    template<typename MinimumT = Aws::String>
    void SetMinimum(MinimumT&& value) { m_minimumHasBeenSet = true; m_minimum = std::forward<MinimumT>(value); }
    template<typename MinimumT = Aws::String>
    Versions& WithMinimum(MinimumT&& value) { SetMinimum(std::forward<MinimumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired maximum version for the challenge.</p>
     */
    inline const Aws::String& GetMaximum() const { return m_maximum; }
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
    template<typename MaximumT = Aws::String>
    void SetMaximum(MaximumT&& value) { m_maximumHasBeenSet = true; m_maximum = std::forward<MaximumT>(value); }
    template<typename MaximumT = Aws::String>
    Versions& WithMaximum(MaximumT&& value) { SetMaximum(std::forward<MaximumT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_minimum;
    bool m_minimumHasBeenSet = false;

    Aws::String m_maximum;
    bool m_maximumHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
