/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>Used to associate a configuration set with a MailManager
   * archive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ArchivingOptions">AWS
   * API Reference</a></p>
   */
  class ArchivingOptions
  {
  public:
    AWS_SESV2_API ArchivingOptions();
    AWS_SESV2_API ArchivingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ArchivingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the MailManager archive where the Amazon
     * SES API v2 will archive sent emails.</p>
     */
    inline const Aws::String& GetArchiveArn() const{ return m_archiveArn; }
    inline bool ArchiveArnHasBeenSet() const { return m_archiveArnHasBeenSet; }
    inline void SetArchiveArn(const Aws::String& value) { m_archiveArnHasBeenSet = true; m_archiveArn = value; }
    inline void SetArchiveArn(Aws::String&& value) { m_archiveArnHasBeenSet = true; m_archiveArn = std::move(value); }
    inline void SetArchiveArn(const char* value) { m_archiveArnHasBeenSet = true; m_archiveArn.assign(value); }
    inline ArchivingOptions& WithArchiveArn(const Aws::String& value) { SetArchiveArn(value); return *this;}
    inline ArchivingOptions& WithArchiveArn(Aws::String&& value) { SetArchiveArn(std::move(value)); return *this;}
    inline ArchivingOptions& WithArchiveArn(const char* value) { SetArchiveArn(value); return *this;}
    ///@}
  private:

    Aws::String m_archiveArn;
    bool m_archiveArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
