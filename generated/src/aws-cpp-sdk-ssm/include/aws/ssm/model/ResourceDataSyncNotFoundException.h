/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The specified sync name wasn't found.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceDataSyncNotFoundException
  {
  public:
    AWS_SSM_API ResourceDataSyncNotFoundException() = default;
    AWS_SSM_API ResourceDataSyncNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceDataSyncNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetSyncName() const { return m_syncName; }
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }
    template<typename SyncNameT = Aws::String>
    void SetSyncName(SyncNameT&& value) { m_syncNameHasBeenSet = true; m_syncName = std::forward<SyncNameT>(value); }
    template<typename SyncNameT = Aws::String>
    ResourceDataSyncNotFoundException& WithSyncName(SyncNameT&& value) { SetSyncName(std::forward<SyncNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSyncType() const { return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    template<typename SyncTypeT = Aws::String>
    void SetSyncType(SyncTypeT&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::forward<SyncTypeT>(value); }
    template<typename SyncTypeT = Aws::String>
    ResourceDataSyncNotFoundException& WithSyncType(SyncTypeT&& value) { SetSyncType(std::forward<SyncTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ResourceDataSyncNotFoundException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet = false;

    Aws::String m_syncType;
    bool m_syncTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
