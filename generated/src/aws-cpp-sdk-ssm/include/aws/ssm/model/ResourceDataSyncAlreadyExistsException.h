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
   * <p>A sync configuration with the same name already exists.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncAlreadyExistsException">AWS
   * API Reference</a></p>
   */
  class ResourceDataSyncAlreadyExistsException
  {
  public:
    AWS_SSM_API ResourceDataSyncAlreadyExistsException() = default;
    AWS_SSM_API ResourceDataSyncAlreadyExistsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceDataSyncAlreadyExistsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetSyncName() const { return m_syncName; }
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }
    template<typename SyncNameT = Aws::String>
    void SetSyncName(SyncNameT&& value) { m_syncNameHasBeenSet = true; m_syncName = std::forward<SyncNameT>(value); }
    template<typename SyncNameT = Aws::String>
    ResourceDataSyncAlreadyExistsException& WithSyncName(SyncNameT&& value) { SetSyncName(std::forward<SyncNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
