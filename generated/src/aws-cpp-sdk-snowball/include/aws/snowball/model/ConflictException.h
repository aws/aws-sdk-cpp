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
   * <p>You get this exception when you call <code>CreateReturnShippingLabel</code>
   * more than once when other requests are not completed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_SNOWBALL_API ConflictException() = default;
    AWS_SNOWBALL_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>You get this resource when you call <code>CreateReturnShippingLabel</code>
     * more than once when other requests are not completed. .</p>
     */
    inline const Aws::String& GetConflictResource() const { return m_conflictResource; }
    inline bool ConflictResourceHasBeenSet() const { return m_conflictResourceHasBeenSet; }
    template<typename ConflictResourceT = Aws::String>
    void SetConflictResource(ConflictResourceT&& value) { m_conflictResourceHasBeenSet = true; m_conflictResource = std::forward<ConflictResourceT>(value); }
    template<typename ConflictResourceT = Aws::String>
    ConflictException& WithConflictResource(ConflictResourceT&& value) { SetConflictResource(std::forward<ConflictResourceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ConflictException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_conflictResource;
    bool m_conflictResourceHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
