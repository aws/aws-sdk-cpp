/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/QDataKeyType.h>
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
   * <p>A structure that contains information about the
   * <code>QDataKey</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/QDataKey">AWS
   * API Reference</a></p>
   */
  class QDataKey
  {
  public:
    AWS_QUICKSIGHT_API QDataKey() = default;
    AWS_QUICKSIGHT_API QDataKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API QDataKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the KMS key that is registered to a QuickSight account for
     * encryption and decryption use as a <code>QDataKey</code>.</p>
     */
    inline const Aws::String& GetQDataKeyArn() const { return m_qDataKeyArn; }
    inline bool QDataKeyArnHasBeenSet() const { return m_qDataKeyArnHasBeenSet; }
    template<typename QDataKeyArnT = Aws::String>
    void SetQDataKeyArn(QDataKeyArnT&& value) { m_qDataKeyArnHasBeenSet = true; m_qDataKeyArn = std::forward<QDataKeyArnT>(value); }
    template<typename QDataKeyArnT = Aws::String>
    QDataKey& WithQDataKeyArn(QDataKeyArnT&& value) { SetQDataKeyArn(std::forward<QDataKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of <code>QDataKey</code>.</p>
     */
    inline QDataKeyType GetQDataKeyType() const { return m_qDataKeyType; }
    inline bool QDataKeyTypeHasBeenSet() const { return m_qDataKeyTypeHasBeenSet; }
    inline void SetQDataKeyType(QDataKeyType value) { m_qDataKeyTypeHasBeenSet = true; m_qDataKeyType = value; }
    inline QDataKey& WithQDataKeyType(QDataKeyType value) { SetQDataKeyType(value); return *this;}
    ///@}
  private:

    Aws::String m_qDataKeyArn;
    bool m_qDataKeyArnHasBeenSet = false;

    QDataKeyType m_qDataKeyType{QDataKeyType::NOT_SET};
    bool m_qDataKeyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
