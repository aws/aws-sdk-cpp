/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class DeleteCustomLogSourceRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API DeleteCustomLogSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomLogSource"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;

    AWS_SECURITYLAKE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The source name of custom log source that you want to delete.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }
    inline DeleteCustomLogSourceRequest& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}
    inline DeleteCustomLogSourceRequest& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}
    inline DeleteCustomLogSourceRequest& WithSourceName(const char* value) { SetSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source version for the third-party custom source. You can limit the
     * custom source removal to the specified source version.</p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }
    inline DeleteCustomLogSourceRequest& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}
    inline DeleteCustomLogSourceRequest& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}
    inline DeleteCustomLogSourceRequest& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
