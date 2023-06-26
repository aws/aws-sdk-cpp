/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>

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
namespace SFN
{
namespace Model
{

  /**
   * <p>Details about a Map state that was started.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/MapStateStartedEventDetails">AWS
   * API Reference</a></p>
   */
  class MapStateStartedEventDetails
  {
  public:
    AWS_SFN_API MapStateStartedEventDetails();
    AWS_SFN_API MapStateStartedEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API MapStateStartedEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the array for Map state iterations.</p>
     */
    inline int GetLength() const{ return m_length; }

    /**
     * <p>The size of the array for Map state iterations.</p>
     */
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }

    /**
     * <p>The size of the array for Map state iterations.</p>
     */
    inline void SetLength(int value) { m_lengthHasBeenSet = true; m_length = value; }

    /**
     * <p>The size of the array for Map state iterations.</p>
     */
    inline MapStateStartedEventDetails& WithLength(int value) { SetLength(value); return *this;}

  private:

    int m_length;
    bool m_lengthHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
