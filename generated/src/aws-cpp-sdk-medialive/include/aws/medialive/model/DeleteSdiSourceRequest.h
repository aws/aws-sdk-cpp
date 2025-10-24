﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

#include <utility>

namespace Aws {
namespace MediaLive {
namespace Model {

/**
 * Placeholder documentation for DeleteSdiSourceRequest<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteSdiSourceRequest">AWS
 * API Reference</a></p>
 */
class DeleteSdiSourceRequest : public MediaLiveRequest {
 public:
  AWS_MEDIALIVE_API DeleteSdiSourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteSdiSource"; }

  AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * The ID of the SdiSource.
   */
  inline const Aws::String& GetSdiSourceId() const { return m_sdiSourceId; }
  inline bool SdiSourceIdHasBeenSet() const { return m_sdiSourceIdHasBeenSet; }
  template <typename SdiSourceIdT = Aws::String>
  void SetSdiSourceId(SdiSourceIdT&& value) {
    m_sdiSourceIdHasBeenSet = true;
    m_sdiSourceId = std::forward<SdiSourceIdT>(value);
  }
  template <typename SdiSourceIdT = Aws::String>
  DeleteSdiSourceRequest& WithSdiSourceId(SdiSourceIdT&& value) {
    SetSdiSourceId(std::forward<SdiSourceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sdiSourceId;
  bool m_sdiSourceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
