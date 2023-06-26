/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/mobile/MobileRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Mobile
{
namespace Model
{

  /**
   * <p> Request structure used for requests to update project configuration.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/UpdateProjectRequest">AWS
   * API Reference</a></p>
   */
  class UpdateProjectRequest : public StreamingMobileRequest
  {
  public:
    AWS_MOBILE_API UpdateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    AWS_MOBILE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Unique project identifier. </p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p> Unique project identifier. </p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p> Unique project identifier. </p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p> Unique project identifier. </p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p> Unique project identifier. </p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p> Unique project identifier. </p>
     */
    inline UpdateProjectRequest& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p> Unique project identifier. </p>
     */
    inline UpdateProjectRequest& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p> Unique project identifier. </p>
     */
    inline UpdateProjectRequest& WithProjectId(const char* value) { SetProjectId(value); return *this;}

  private:


    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
