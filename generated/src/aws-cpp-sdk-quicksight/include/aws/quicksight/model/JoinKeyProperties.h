/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>Properties associated with the columns participating in a join.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/JoinKeyProperties">AWS
   * API Reference</a></p>
   */
  class JoinKeyProperties
  {
  public:
    AWS_QUICKSIGHT_API JoinKeyProperties();
    AWS_QUICKSIGHT_API JoinKeyProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API JoinKeyProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that indicates that a row in a table is uniquely identified by the
     * columns in a join key. This is used by Amazon QuickSight to optimize query
     * performance.</p>
     */
    inline bool GetUniqueKey() const{ return m_uniqueKey; }

    /**
     * <p>A value that indicates that a row in a table is uniquely identified by the
     * columns in a join key. This is used by Amazon QuickSight to optimize query
     * performance.</p>
     */
    inline bool UniqueKeyHasBeenSet() const { return m_uniqueKeyHasBeenSet; }

    /**
     * <p>A value that indicates that a row in a table is uniquely identified by the
     * columns in a join key. This is used by Amazon QuickSight to optimize query
     * performance.</p>
     */
    inline void SetUniqueKey(bool value) { m_uniqueKeyHasBeenSet = true; m_uniqueKey = value; }

    /**
     * <p>A value that indicates that a row in a table is uniquely identified by the
     * columns in a join key. This is used by Amazon QuickSight to optimize query
     * performance.</p>
     */
    inline JoinKeyProperties& WithUniqueKey(bool value) { SetUniqueKey(value); return *this;}

  private:

    bool m_uniqueKey;
    bool m_uniqueKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
