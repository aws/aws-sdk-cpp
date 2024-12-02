/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
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
namespace SecurityIR
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/Watcher">AWS
   * API Reference</a></p>
   */
  class Watcher
  {
  public:
    AWS_SECURITYIR_API Watcher();
    AWS_SECURITYIR_API Watcher(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Watcher& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline Watcher& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline Watcher& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline Watcher& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Watcher& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Watcher& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Watcher& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetJobTitle() const{ return m_jobTitle; }
    inline bool JobTitleHasBeenSet() const { return m_jobTitleHasBeenSet; }
    inline void SetJobTitle(const Aws::String& value) { m_jobTitleHasBeenSet = true; m_jobTitle = value; }
    inline void SetJobTitle(Aws::String&& value) { m_jobTitleHasBeenSet = true; m_jobTitle = std::move(value); }
    inline void SetJobTitle(const char* value) { m_jobTitleHasBeenSet = true; m_jobTitle.assign(value); }
    inline Watcher& WithJobTitle(const Aws::String& value) { SetJobTitle(value); return *this;}
    inline Watcher& WithJobTitle(Aws::String&& value) { SetJobTitle(std::move(value)); return *this;}
    inline Watcher& WithJobTitle(const char* value) { SetJobTitle(value); return *this;}
    ///@}
  private:

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_jobTitle;
    bool m_jobTitleHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
