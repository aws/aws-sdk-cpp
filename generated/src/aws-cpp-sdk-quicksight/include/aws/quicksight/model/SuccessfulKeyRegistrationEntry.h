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
   * <p>A success entry that occurs when a <code>KeyRegistration</code> job is
   * successfully applied to the QuickSight account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SuccessfulKeyRegistrationEntry">AWS
   * API Reference</a></p>
   */
  class SuccessfulKeyRegistrationEntry
  {
  public:
    AWS_QUICKSIGHT_API SuccessfulKeyRegistrationEntry() = default;
    AWS_QUICKSIGHT_API SuccessfulKeyRegistrationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SuccessfulKeyRegistrationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the KMS key that is associated with the
     * <code>SuccessfulKeyRegistrationEntry</code> entry.</p>
     */
    inline const Aws::String& GetKeyArn() const { return m_keyArn; }
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }
    template<typename KeyArnT = Aws::String>
    void SetKeyArn(KeyArnT&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::forward<KeyArnT>(value); }
    template<typename KeyArnT = Aws::String>
    SuccessfulKeyRegistrationEntry& WithKeyArn(KeyArnT&& value) { SetKeyArn(std::forward<KeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of a <code>SuccessfulKeyRegistrationEntry</code> entry.</p>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline SuccessfulKeyRegistrationEntry& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}
  private:

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;

    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
